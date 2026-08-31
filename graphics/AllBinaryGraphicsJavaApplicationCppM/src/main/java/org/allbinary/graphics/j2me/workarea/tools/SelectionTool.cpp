
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
        
            #include "../../../../../../java/lang/Double.h"
        
#include <java/awt.h>

      
#include <java/util/HashMap.h>

      
#include <javax/swing/tree/MutableTreeNode.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/RectangleCollisionPointUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GraphicItemInterface.h"
#include "Color.h"
#include "Points.h"
#include "LinesGraphicItem.h"
#include "Graphics.h"
#include "MouseEvent.h"
#include "MouseStrings.h"
#include "KeyEvent.h"

class SelectionTool
            : public Object
        : public GraphicItemInterface {
        

    private: static const NAME: string = "Selection Tool";

    public static string getStaticName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SelectionTool.NAME;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const canvasJPanel: CanvasJPanel;

    private: active: bool = true;

public constructor (CanvasJPanel canvasJPanel){

            super();
        this.canvasJPanel= canvasJPanel;
    
}


    public setColor(Color color){
}


    public MutableTreeNode getTreeNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Points getPointsInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public setPointsInterface(Points points){
}


    public bool isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public bool isActive(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.active;
    
}


    public deactivate(){
}


    public activate(){
}


    public setFulcrumPoint(GPoint point){
}


                //@Throws(Exception.constructor)
            
    public translate(int32_t x, int32_t y){
}


    public setRotate(double theta){
}


    public addRotate(double theta){
}


    public setAngle(double angle){
}


    public addAngle(double angle){
}


    public double getAngle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    private: controlIdDown: bool= false;

    makeSelection(){

    xRect: int32_t = this.getXRect()!;;
    

    xRect2: int32_t = Math.abs(this.endPoint!.getX() -this.startPoint!.getX()) +xRect;;
    

    yRect: int32_t = this.getYRect()!;;
    

    yRect2: int32_t = Math.abs(this.endPoint!.getY() -this.startPoint!.getY()) +yRect;;
    

    hashMap: HashMap<any, any> = this.canvasJPanel!.getGraphicItemHashMap()!;;
    

    graphicItemArray: std::vector<any> = hashMap!.keys().()!;;
    

    size: int32_t = graphicItemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: GraphicItemInterface = hashMap!.get(graphicItemArray[index]!) as GraphicItemInterface;;
    

                        if(item.getName() == LinesGraphicItem.getStaticName())
                        
                                    {
                                    
                        if(RectangleCollisionPointUtil.allPointsInsideCell(xRect, yRect, xRect2, yRect2, item.getPointsInterface()!.getPoints(), this.canvasJPanel!.getXPixelsPerWorkAreaPixel(), this.canvasJPanel!.getYPixelsPerWorkAreaPixel()))
                        
                                    {
                                    item.setColor(Color.YELLOW);
    
item.activate();
    

                                    }
                                
                             else 
                        if(!this.controlIdDown)
                        
                                    {
                                    item.setColor(Color.WHITE);
    
item.deactivate();
    

                                    }
                                

                                    }
                                
}

}


    private: const rectColor: Color = new Color(BasicColorFactory.getInstance()!.RED.intValue());

    public int32_t getXRect(){

    xDiff: int32_t = this.endPoint!.getX() -this.startPoint!.getX();;
    

    xRect: int32_t = this.startPoint!.getX()!;;
    

                        if(xDiff < 0)
                        
                                    {
                                    xRect= this.endPoint!.getX();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return xRect;
    
}


    public int32_t getYRect(){

    yDiff: int32_t = this.endPoint!.getY() -this.startPoint!.getY();;
    

    yRect: int32_t = this.startPoint!.getY()!;;
    

                        if(yDiff < 0)
                        
                                    {
                                    yRect= this.endPoint!.getY();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return yRect;
    
}


    public paint(Graphics g, number canvasAngle, IntegerDimension dimension, int32_t x, int32_t y){
g.setColor(this.rectColor);
    

    xRect: int32_t = this.getXRect()!;;
    

    width: int32_t = Math.abs(this.endPoint!.getX() -this.startPoint!.getX())!;;
    

    yRect: int32_t = this.getYRect()!;;
    

    height: int32_t = Math.abs(this.endPoint!.getY() -this.startPoint!.getY())!;;
    
g.drawRect(xRect, yRect, width, height);
    
}


                //@Throws(Exception.constructor)
            
    public Node toDom(CanvasDom canvasDom){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public GPoint removePoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public addPoint(GPoint point){
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SelectionTool.NAME;
    
}


    private: startPoint: GPoint = PointFactory.getInstance()!.ZERO_ZERO;

    private: endPoint: GPoint = this.startPoint;

    public mouseClicked(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
}


    public mouseMoved(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
}


    public mouseEntered(java.awt.event.MouseEvent mouseEvent){
}


    public mouseExited(java.awt.event.MouseEvent mouseEvent){
}


    public mousePressed(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
this.logUtil!.putF(this.commonStrings!.START, this, MouseStrings.getInstance()!.MOUSE_PRESSED);
    
this.startPoint= PointFactory.getInstance()!.createXY(mouseEvent!.getX(), mouseEvent!.getY());
    
this.endPoint= this.startPoint;
    
}


    public mouseReleased(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
this.logUtil!.putF(this.commonStrings!.START, this, MouseStrings.getInstance()!.MOUSE_RELEASED);
    
this.endPoint= PointFactory.getInstance()!.createXY(mouseEvent!.getX(), mouseEvent!.getY());
    
this.active= false;
    
this.makeSelection();
    
}


    public mouseDragged(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
this.endPoint= PointFactory.getInstance()!.createXY(mouseEvent!.getX(), mouseEvent!.getY());
    
}


    public keyPressed(java.awt.event.KeyEvent keyEvent){

                        if(keyEvent!.getKeyCode() == keyEvent!.VK_CONTROL)
                        
                                    {
                                    this.controlIdDown= true;
    

                                    }
                                
}


    public keyReleased(java.awt.event.KeyEvent keyEvent){

                        if(keyEvent!.getKeyCode() == keyEvent!.VK_CONTROL)
                        
                                    {
                                    this.controlIdDown= false;
    

                                    }
                                
}


    public keyTyped(java.awt.event.KeyEvent keyEvent){
}


                //@Throws(Exception.constructor)
            
    public GraphicItemInterface duplicate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

