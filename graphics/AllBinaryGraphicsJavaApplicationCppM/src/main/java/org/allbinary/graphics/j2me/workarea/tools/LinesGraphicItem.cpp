
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

    private: static const std::string RECT = "rect";

    private: static const std::string ARC = "arc";

    private: static const std::string STRING = "string";

    private: static const std::string CHAR = "char";

    private: static const std::string IMAGE = "image";

    private: static int32_t item = 0;

    private: static const std::string NAME = "Line Tool";

    public: static std::string getStaticName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LinesGraphicItem::NAME;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const GameInputStrings gameInputStrings = GameInputStrings::getInstance();

    private: DefaultMutableTreeNode treeNode;

    private: Vector pointTreeNodeVector;

    private: GPoint currentMousePoint;

    private: GPoint fulcrumPoint;

    private: bool active = false;

    private: double theta = 0;

    private: Color color = Color(BasicColorFactory::getInstance().WHITE.intValue());

    private: Points points;

public: LinesGraphicItem(){
this->points= Points();
    

        try {
            this->init();
    
this->active= true;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.CONSTRUCTOR, e);
    
}

}


public: LinesGraphicItem(Node linesNode){
this->points= Points();
    
this->init();
    
this->active= false;
    

    BasicArrayList lineNodes = DomHelper::getInstance().getWithoutTextNodes(linesNode.getChildNodes());;
    

    int32_t numberOfLines = lineNodes.size();;
    




                        for (
    int32_t index = 0;index < numberOfLines; index++)
        {

    Node lineNode = lineNodes.get(index) as Node;;
    

    BasicArrayList pointNodes = DomHelper::getInstance().getWithoutTextNodes(lineNode.getChildNodes());;
    

    Node pointOneNode = DomHelper::getInstance().searchNodeList(PointsDomUtil::getInstance().POINTONE, pointNodes);;
    
this->addPoint(pointOneNode.getChildNodes());
    

                        if(index == numberOfLines -1)
                        
                                    {
                                    
    Node pointTwoNode = DomHelper::getInstance().searchNodeList(PointsDomUtil::getInstance().POINTTWO, pointNodes);;
    
this->addPoint(pointTwoNode.getChildNodes());
    

                                    }
                                
}


                        if(numberOfLines == 0)
                        
                                    {
                                    


                            throw Exception("Lines node does not contain a line");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void init(){
this->treeNode= DefaultMutableTreeNode(PointsDomUtil::getInstance().LINES +LinesGraphicItem::item);
    
LinesGraphicItem::item++;
    
this->points.init();
    
this->pointTreeNodeVector= Vector();
    
this->fulcrumPoint= PointFactory::getInstance().createXY(0, 0);
    
}


                //@Throws(Exception.constructor)
            
    public: void translate(int32_t x, int32_t y){
StatusFactory::getInstance().setStatus("Translating: " +this->points.getPoints());
    

    BasicGraphicsPipeline basicGraphicsPipeline = BasicGraphicsPipeline(this->points.getPoints());;
    
basicGraphicsPipeline.translate(x, y);
    
this->points= Points();
    
this->points.addPoints(basicGraphicsPipeline.getMatrix());
    
}


    public: void setRotate(double theta){

        while(theta > 2 *Math::PI)
        {
theta -= 2 *Math::PI;
    
}


        while(theta < 0)
        {
theta += 2 *Math::PI;
    
}

this->theta= theta;
    
}


    public: void addRotate(double theta){
this->setRotate(this->theta +theta);
    
}


    public: void setAngle(double angle){
this->setRotate(Math::toRadians(angle));
    
}


    public: void addAngle(double angle){
this->setRotate(this->theta +Math::toRadians(angle));
    
}


    public: MutableTreeNode getTreeNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->treeNode as MutableTreeNode;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LinesGraphicItem::NAME;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void addPoint(NodeList pointNodes){

    BasicArrayList list = DomHelper::getInstance().getWithoutTextNodes(pointNodes);;
    

    Node xNode = DomHelper::getInstance().searchNodeList(PositionStrings::getInstance().X, list);;
    

    Node xTextNode = xNode.getFirstChild();;
    

    Integer xInteger = Integer(xTextNode.getNodeValue());;
    

    Node yNode = DomHelper::getInstance().searchNodeList(PositionStrings::getInstance().Y, list);;
    

    Node yTextNode = yNode.getFirstChild();;
    

    Integer yInteger = Integer(yTextNode.getNodeValue());;
    

    GPoint point = PointFactory::getInstance().createXY(xInteger.intValue(), yInteger.intValue());;
    
this->addPoint(point);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addPoint(GPoint point){
this->points.getPoints().add(point);
    
this->logUtil.putF(point.toString(), this, "addPoint");
    
this->pointTreeNodeVector.add(DefaultMutableTreeNode(point.toString()));
    
this->treeNode.add(this->pointTreeNodeVector.get(this->pointTreeNodeVector.length -1) as DefaultMutableTreeNode);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: GPoint removePoint(){

    GPoint point = 
                null
            ;;
    

                        if(this->points.getSize() > 0)
                        
                                    {
                                    
    int32_t lastPoint = this->points.getSize() -1;;
    
point= this->points.getPoints().removeAt(lastPoint) as GPoint;
    

    int32_t index = this->pointTreeNodeVector.length -1;;
    

                        if(index > 0)
                        
                                    {
                                    this->treeNode.remove(this->pointTreeNodeVector.get(index) as DefaultMutableTreeNode);
    
this->pointTreeNodeVector.remove(index);
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return point;
    
}


    public: bool isActive(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->active;
    
}


    public: void deactivate(){
this->active= false;
    
}


    public: void activate(){
this->active= true;
    
}


                //@Throws(Exception.constructor)
            
    public: void duplicatePoints(BasicArrayList list){

    int32_t size = list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GPoint point = list.get(index) as GPoint;;
    

                        if(point != 
                                    nullptr
                                )
                        
                                    {
                                    this->points.getPoints().add(PointFactory::getInstance().createXY(point.getX(), point.getY()));
    
this->pointTreeNodeVector.add(DefaultMutableTreeNode(point.toString()));
    
this->treeNode.add(this->pointTreeNodeVector.get(this->pointTreeNodeVector.length -1) as DefaultMutableTreeNode);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: GraphicItemInterface duplicate(){

    LinesGraphicItem linesGraphicItem = LinesGraphicItem();;
    
linesGraphicItem.duplicatePoints(this->points.getPoints());
    
linesGraphicItem.deactivate();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return linesGraphicItem;
    
}


    public: double getAngle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Math::toDegrees(this->theta);;
    
}


    public: void setFulcrumPoint(GPoint point){
this->fulcrumPoint= point;
    
}


    public: void paint(Graphics g, number canvasAngle, IntegerDimension dimension, int32_t x, int32_t y){

        try {
            
    Graphics2D graphics = g as Graphics2D;;
    
graphics.setColor(getColor());
    
graphics.setStroke(BasicStroke(x));
    

                        if(this->isActive() && this->currentMousePoint != 
                                    nullptr
                                )
                        
                                    {
                                    this->points.getPoints().add(this->currentMousePoint);
    

                                    }
                                

    BasicArrayList tempPointVector = PointsUtil::getInstance().doTransforms(this->points.getPoints(), canvasAngle, PointFactory::getInstance().createXY(dimension.getWidth(), dimension.getHeight()));;
    

                        if(this->isActive() && this->currentMousePoint != 
                                    nullptr
                                )
                        
                                    {
                                    this->currentMousePoint= this->points.getPoints().removeAt(this->points.getSize() -1) as GPoint;
    

                                    }
                                

    int32_t size = tempPointVector.size();;
    

    GPoint firstPoint = 
                null
            ;;
    

                        if(size > 0)
                        
                                    {
                                    firstPoint= tempPointVector.get(0) as GPoint;
    

                                    }
                                




                        for (
    int32_t index = 1;index < size; index++)
        {

    GPoint secondPoint = tempPointVector.get(index) as GPoint;;
    
graphics.drawLine((firstPoint.getX() *x) -(x /4), (firstPoint.getY() *y) -(y /4), (secondPoint.getX() *x) -(x /4), (secondPoint.getY() *y) -(y /4));
    
firstPoint= secondPoint;
    
}


                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "mouseMoved", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: Node toDom(CanvasDom canvasDom){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointsDomUtil::getInstance().toDom(canvasDom, this->points.getPoints());;
    
}


    public: bool isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->points.isValid();;
    
}


    public: Points getPointsInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->points;
    
}


    public: void setPointsInterface(Points points){
this->points= points;
    
}


    public: Color getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->color;
    
}


    public: void setColor(Color color){
this->color= color;
    
}


    public: void mouseClicked(java::awt::event::MouseEvent mouseEvent, int32_t x, int32_t y){

        try {
            
    GPoint mousePoint = PointFactory::getInstance().createXY(mouseEvent.getPoint().x, mouseEvent.getPoint().y);;
    

                        if((mouseEvent.getModifiers()&mouseEvent.BUTTON1_MASK) == mouseEvent.BUTTON1_MASK)
                        
                                    {
                                    
    GPoint point = PointFactory::getInstance().createXY(mousePoint.getX() /x, mousePoint.getY() /y);;
    
StatusFactory::getInstance().setStatus("Line Point Added: " +point.toString());
    
this->addPoint(point);
    

                                    }
                                
                             else 
                        if((mouseEvent.getModifiers()&mouseEvent.BUTTON3_MASK) == mouseEvent.BUTTON3_MASK)
                        
                                    {
                                    StatusFactory::getInstance().setStatus("Line Point Removed");
    
this->removePoint();
    

                                    }
                                
this->currentMousePoint= mousePoint;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "mouseMoved", e);
    
}

}


    public: void mouseEntered(java::awt::event::MouseEvent mouseEvent){
}


    public: void mouseExited(java::awt::event::MouseEvent mouseEvent){
}


    public: void mousePressed(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
}


    public: void mouseReleased(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
}


    public: void mouseDragged(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
}


    public: void mouseMoved(java::awt::event::MouseEvent mouseEvent, int32_t x, int32_t y){

        try {
            
    GPoint mousePoint = PointFactory::getInstance().createXY(mouseEvent.getPoint().x, mouseEvent.getPoint().y);;
    

    GPoint point = PointFactory::getInstance().createXY(mousePoint.getX() /x, mousePoint.getY() /y);;
    
this->currentMousePoint= point;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "mouseMoved", e);
    
}

}


    public: void keyPressed(java::awt::event::KeyEvent keyEvent){

        try {
            
    int32_t keyCode = keyEvent.getKeyCode();;
    

                        if(keyCode == keyEvent.VK_ESCAPE)
                        
                                    {
                                    StatusFactory::getInstance().setStatus("Deactivated");
    
this->deactivate();
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent.VK_UP)
                        
                                    {
                                    this->translate(0,  -1);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent.VK_DOWN)
                        
                                    {
                                    this->translate(0, 1);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent.VK_LEFT)
                        
                                    {
                                    this->translate( -1, 0);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent.VK_RIGHT)
                        
                                    {
                                    this->translate(1, 0);
    

                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, gameInputStrings.KEY_PRESSED, e);
    
}

}


    public: void keyReleased(java::awt::event::KeyEvent keyEvent){
}


    public: void keyTyped(java::awt::event::KeyEvent keyEvent){
}


};

            

