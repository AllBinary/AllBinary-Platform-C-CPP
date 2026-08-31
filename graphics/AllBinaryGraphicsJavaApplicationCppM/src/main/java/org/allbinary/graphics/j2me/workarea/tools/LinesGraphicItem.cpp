
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Math.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../java/lang/Double.h"
        
#include <java/awt.h>

      
#include <java/util/Vector.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <javax/swing/tree/MutableTreeNode.h>

      
#include <org/allbinary/dom/DomHelper.h>

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/j2me/StatusFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h>

      
#include <org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GraphicItemInterface.h"
#include "Color.h"
#include "Points.h"
#include "PointsDomUtil.h"
#include "Graphics2D.h"
#include "BasicStroke.h"
#include "PointsUtil.h"
#include "Graphics.h"
#include "MouseEvent.h"
#include "KeyEvent.h"

class LinesGraphicItem
            : public Object
        : public GraphicItemInterface {
        

    private: static const RECT: string = "rect";

    private: static const ARC: string = "arc";

    private: static const STRING: string = "string";

    private: static const CHAR: string = "char";

    private: static const IMAGE: string = "image";

    private: static item: int32_t = 0;

    private: static const NAME: string = "Line Tool";

    public static string getStaticName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LinesGraphicItem.NAME;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const gameInputStrings: GameInputStrings = GameInputStrings.getInstance()!;

    private: treeNode: DefaultMutableTreeNode;

    private: pointTreeNodeVector: Vector;

    private: currentMousePoint: GPoint;

    private: fulcrumPoint: GPoint;

    private: active: bool = false;

    private: theta: double = 0;

    private: color: Color = new Color(BasicColorFactory.getInstance()!.WHITE.intValue());

    private: points: Points;

public constructor (){

            super();
        this.points= new Points();
    

        try {
            this.init();
    
this.active= true;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.CONSTRUCTOR, e);
    
}

}


public constructor (Node linesNode){

            super();
        this.points= new Points();
    
this.init();
    
this.active= false;
    

    lineNodes: BasicArrayList = DomHelper.getInstance()!.getWithoutTextNodes(linesNode!.getChildNodes())!;;
    

    numberOfLines: int32_t = lineNodes!.size()!;;
    




                        for (
    index: int32_t = 0;index < numberOfLines; index++)
        {

    lineNode: Node = lineNodes!.get(index) as Node;;
    

    pointNodes: BasicArrayList = DomHelper.getInstance()!.getWithoutTextNodes(lineNode!.getChildNodes())!;;
    

    pointOneNode: Node = DomHelper.getInstance()!.searchNodeList(PointsDomUtil.getInstance()!.POINTONE, pointNodes)!;;
    
this.addPoint(pointOneNode!.getChildNodes());
    

                        if(index == numberOfLines -1)
                        
                                    {
                                    
    pointTwoNode: Node = DomHelper.getInstance()!.searchNodeList(PointsDomUtil.getInstance()!.POINTTWO, pointNodes)!;;
    
this.addPoint(pointTwoNode!.getChildNodes());
    

                                    }
                                
}


                        if(numberOfLines == 0)
                        
                                    {
                                    


                            throw new Exception("Lines node does not contain a line");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public init(){
this.treeNode= new DefaultMutableTreeNode(PointsDomUtil.getInstance()!.LINES +LinesGraphicItem.item);
    
LinesGraphicItem.item++;
    
this.points.init();
    
this.pointTreeNodeVector= new Vector();
    
this.fulcrumPoint= PointFactory.getInstance()!.createXY(0, 0);
    
}


                //@Throws(Exception.constructor)
            
    public translate(int32_t x, int32_t y){
StatusFactory.getInstance()!.setStatus("Translating: " +this.points.getPoints());
    

    basicGraphicsPipeline: BasicGraphicsPipeline = new BasicGraphicsPipeline(this.points.getPoints());;
    
basicGraphicsPipeline!.translate(x, y);
    
this.points= new Points();
    
this.points.addPoints(basicGraphicsPipeline!.getMatrix());
    
}


    public setRotate(double theta){

        while(theta > 2 *Math.PI)
        {
theta -= 2 *Math.PI;
    
}


        while(theta < 0)
        {
theta += 2 *Math.PI;
    
}

this.theta= theta;
    
}


    public addRotate(double theta){
this.setRotate(this.theta +theta);
    
}


    public setAngle(double angle){
this.setRotate(Math.toRadians(angle));
    
}


    public addAngle(double angle){
this.setRotate(this.theta +Math.toRadians(angle));
    
}


    public MutableTreeNode getTreeNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.treeNode as MutableTreeNode;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LinesGraphicItem.NAME;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    addPoint(NodeList pointNodes){

    list: BasicArrayList = DomHelper.getInstance()!.getWithoutTextNodes(pointNodes)!;;
    

    xNode: Node = DomHelper.getInstance()!.searchNodeList(PositionStrings.getInstance()!.X, list)!;;
    

    xTextNode: Node = xNode!.getFirstChild()!;;
    

    xInteger: Integer = new Integer(xTextNode!.getNodeValue());;
    

    yNode: Node = DomHelper.getInstance()!.searchNodeList(PositionStrings.getInstance()!.Y, list)!;;
    

    yTextNode: Node = yNode!.getFirstChild()!;;
    

    yInteger: Integer = new Integer(yTextNode!.getNodeValue());;
    

    point: GPoint = PointFactory.getInstance()!.createXY(xInteger!.intValue(), yInteger!.intValue())!;;
    
this.addPoint(point);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addPoint(GPoint point){
this.points.getPoints()!.add(point);
    
this.logUtil!.putF(point.toString(), this, "addPoint");
    
this.pointTreeNodeVector!.add(new DefaultMutableTreeNode(point.toString()));
    
this.treeNode!.add(this.pointTreeNodeVector!.get(this.pointTreeNodeVector!.length -1) as DefaultMutableTreeNode);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public GPoint removePoint(){

    point: GPoint = 
                null
            ;;
    

                        if(this.points.getSize() > 0)
                        
                                    {
                                    
    lastPoint: int32_t = this.points.getSize() -1;;
    
point= this.points.getPoints()!.removeAt(lastPoint) as GPoint;
    

    index: int32_t = this.pointTreeNodeVector!.length -1;;
    

                        if(index > 0)
                        
                                    {
                                    this.treeNode!.remove(this.pointTreeNodeVector!.get(index) as DefaultMutableTreeNode);
    
this.pointTreeNodeVector!.remove(index);
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return point;
    
}


    public bool isActive(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.active;
    
}


    public deactivate(){
this.active= false;
    
}


    public activate(){
this.active= true;
    
}


                //@Throws(Exception.constructor)
            
    public duplicatePoints(BasicArrayList list){

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    point: GPoint = list.get(index) as GPoint;;
    

                        if(point != 
                                    null
                                )
                        
                                    {
                                    this.points.getPoints()!.add(PointFactory.getInstance()!.createXY(point.getX(), point.getY()));
    
this.pointTreeNodeVector!.add(new DefaultMutableTreeNode(point.toString()));
    
this.treeNode!.add(this.pointTreeNodeVector!.get(this.pointTreeNodeVector!.length -1) as DefaultMutableTreeNode);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public GraphicItemInterface duplicate(){

    linesGraphicItem: LinesGraphicItem = new LinesGraphicItem();;
    
linesGraphicItem!.duplicatePoints(this.points.getPoints());
    
linesGraphicItem!.deactivate();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return linesGraphicItem;
    
}


    public double getAngle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Math.toDegrees(this.theta);;
    
}


    public setFulcrumPoint(GPoint point){
this.fulcrumPoint= point;
    
}


    public paint(Graphics g, number canvasAngle, IntegerDimension dimension, int32_t x, int32_t y){

        try {
            
    graphics: Graphics2D = g as Graphics2D;;
    
graphics.setColor(getColor());
    
graphics.setStroke(new BasicStroke(x));
    

                        if(this.isActive() && this.currentMousePoint != 
                                    null
                                )
                        
                                    {
                                    this.points.getPoints()!.add(this.currentMousePoint);
    

                                    }
                                

    tempPointVector: BasicArrayList = PointsUtil.getInstance()!.doTransforms(this.points.getPoints(), canvasAngle, PointFactory.getInstance()!.createXY(dimension.getWidth(), dimension.getHeight()))!;;
    

                        if(this.isActive() && this.currentMousePoint != 
                                    null
                                )
                        
                                    {
                                    this.currentMousePoint= this.points.getPoints()!.removeAt(this.points.getSize() -1) as GPoint;
    

                                    }
                                

    size: int32_t = tempPointVector!.size()!;;
    

    firstPoint: GPoint = 
                null
            ;;
    

                        if(size > 0)
                        
                                    {
                                    firstPoint= tempPointVector!.get(0) as GPoint;
    

                                    }
                                




                        for (
    index: int32_t = 1;index < size; index++)
        {

    secondPoint: GPoint = tempPointVector!.get(index) as GPoint;;
    
graphics.drawLine((firstPoint!.getX() *x) -(x /4), (firstPoint!.getY() *y) -(y /4), (secondPoint!.getX() *x) -(x /4), (secondPoint!.getY() *y) -(y /4));
    
firstPoint= secondPoint;
    
}


                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "mouseMoved", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public Node toDom(CanvasDom canvasDom){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointsDomUtil.getInstance()!.toDom(canvasDom, this.points.getPoints());;
    
}


    public bool isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.points.isValid();;
    
}


    public Points getPointsInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.points;
    
}


    public setPointsInterface(Points points){
this.points= points;
    
}


    public Color getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.color;
    
}


    public setColor(Color color){
this.color= color;
    
}


    public mouseClicked(java.awt.event.MouseEvent mouseEvent, int32_t x, int32_t y){

        try {
            
    mousePoint: GPoint = PointFactory.getInstance()!.createXY(mouseEvent!.getPoint()!.x, mouseEvent!.getPoint()!.y)!;;
    

                        if((mouseEvent!.getModifiers()&mouseEvent!.BUTTON1_MASK) == mouseEvent!.BUTTON1_MASK)
                        
                                    {
                                    
    point: GPoint = PointFactory.getInstance()!.createXY(mousePoint!.getX() /x, mousePoint!.getY() /y)!;;
    
StatusFactory.getInstance()!.setStatus("Line Point Added: " +point.toString());
    
this.addPoint(point);
    

                                    }
                                
                             else 
                        if((mouseEvent!.getModifiers()&mouseEvent!.BUTTON3_MASK) == mouseEvent!.BUTTON3_MASK)
                        
                                    {
                                    StatusFactory.getInstance()!.setStatus("Line Point Removed");
    
this.removePoint();
    

                                    }
                                
this.currentMousePoint= mousePoint;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "mouseMoved", e);
    
}

}


    public mouseEntered(java.awt.event.MouseEvent mouseEvent){
}


    public mouseExited(java.awt.event.MouseEvent mouseEvent){
}


    public mousePressed(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
}


    public mouseReleased(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
}


    public mouseDragged(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
}


    public mouseMoved(java.awt.event.MouseEvent mouseEvent, int32_t x, int32_t y){

        try {
            
    mousePoint: GPoint = PointFactory.getInstance()!.createXY(mouseEvent!.getPoint()!.x, mouseEvent!.getPoint()!.y)!;;
    

    point: GPoint = PointFactory.getInstance()!.createXY(mousePoint!.getX() /x, mousePoint!.getY() /y)!;;
    
this.currentMousePoint= point;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "mouseMoved", e);
    
}

}


    public keyPressed(java.awt.event.KeyEvent keyEvent){

        try {
            
    keyCode: int32_t = keyEvent!.getKeyCode()!;;
    

                        if(keyCode == keyEvent!.VK_ESCAPE)
                        
                                    {
                                    StatusFactory.getInstance()!.setStatus("Deactivated");
    
this.deactivate();
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent!.VK_UP)
                        
                                    {
                                    this.translate(0,  -1);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent!.VK_DOWN)
                        
                                    {
                                    this.translate(0, 1);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent!.VK_LEFT)
                        
                                    {
                                    this.translate( -1, 0);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent!.VK_RIGHT)
                        
                                    {
                                    this.translate(1, 0);
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, gameInputStrings!.KEY_PRESSED, e);
    
}

}


    public keyReleased(java.awt.event.KeyEvent keyEvent){
}


    public keyTyped(java.awt.event.KeyEvent keyEvent){
}


};

            

