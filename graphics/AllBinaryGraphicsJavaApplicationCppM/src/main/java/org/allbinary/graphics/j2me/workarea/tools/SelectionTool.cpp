
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
        



            #include <vector>
        
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

    private: static const std::string NAME = "Selection Tool";

    public: static std::string getStaticName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SelectionTool::NAME;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: CanvasJPanel canvasJPanel;

    private: bool active = true;

public: SelectionTool(CanvasJPanel canvasJPanel){
this->canvasJPanel= canvasJPanel;
    
}


    public: void setColor(Color color){
}


    public: MutableTreeNode getTreeNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Points getPointsInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: void setPointsInterface(Points points){
}


    public: bool isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: bool isActive(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->active;
    
}


    public: void deactivate(){
}


    public: void activate(){
}


    public: void setFulcrumPoint(GPoint point){
}


                //@Throws(Exception.constructor)
            
    public: void translate(int32_t x, int32_t y){
}


    public: void setRotate(double theta){
}


    public: void addRotate(double theta){
}


    public: void setAngle(double angle){
}


    public: void addAngle(double angle){
}


    public: double getAngle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    private: bool controlIdDown= false;

    private: void makeSelection(){

    int32_t xRect = this->getXRect();;
    

    int32_t xRect2 = Math::abs(this->endPoint.getX() -this->startPoint.getX()) +xRect;;
    

    int32_t yRect = this->getYRect();;
    

    int32_t yRect2 = Math::abs(this->endPoint.getY() -this->startPoint.getY()) +yRect;;
    

    HashMap<any, any> hashMap = this->canvasJPanel.getGraphicItemHashMap();;
    

    std::vector<Object*> graphicItemArray = hashMap.keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface item = hashMap.get(graphicItemArray[index]!) as GraphicItemInterface;;
    

                        if(item.getName() == LinesGraphicItem::getStaticName())
                        
                                    {
                                    
                        if(RectangleCollisionPointUtil::allPointsInsideCell(xRect, yRect, xRect2, yRect2, item.getPointsInterface().getPoints(), this->canvasJPanel.getXPixelsPerWorkAreaPixel(), this->canvasJPanel.getYPixelsPerWorkAreaPixel()))
                        
                                    {
                                    item.setColor(Color::YELLOW);
    
item.activate();
    

                                    }
                                
                             else 
                        if(!this->controlIdDown)
                        
                                    {
                                    item.setColor(Color::WHITE);
    
item.deactivate();
    

                                    }
                                

                                    }
                                
}

}


    private: const Color rectColor = Color(BasicColorFactory::getInstance().RED.intValue());

    public: int32_t getXRect(){

    int32_t xDiff = this->endPoint.getX() -this->startPoint.getX();;
    

    int32_t xRect = this->startPoint.getX();;
    

                        if(xDiff < 0)
                        
                                    {
                                    xRect= this->endPoint.getX();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return xRect;
    
}


    public: int32_t getYRect(){

    int32_t yDiff = this->endPoint.getY() -this->startPoint.getY();;
    

    int32_t yRect = this->startPoint.getY();;
    

                        if(yDiff < 0)
                        
                                    {
                                    yRect= this->endPoint.getY();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return yRect;
    
}


    public: void paint(Graphics g, number canvasAngle, IntegerDimension dimension, int32_t x, int32_t y){
g.setColor(this->rectColor);
    

    int32_t xRect = this->getXRect();;
    

    int32_t width = Math::abs(this->endPoint.getX() -this->startPoint.getX());;
    

    int32_t yRect = this->getYRect();;
    

    int32_t height = Math::abs(this->endPoint.getY() -this->startPoint.getY());;
    
g.drawRect(xRect, yRect, width, height);
    
}


                //@Throws(Exception.constructor)
            
    public: Node toDom(CanvasDom canvasDom){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: GPoint removePoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: void addPoint(GPoint point){
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SelectionTool::NAME;
    
}


    private: GPoint startPoint = PointFactory::getInstance().ZERO_ZERO;

    private: GPoint endPoint = this->startPoint;

    public: void mouseClicked(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
}


    public: void mouseMoved(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
}


    public: void mouseEntered(java::awt::event::MouseEvent mouseEvent){
}


    public: void mouseExited(java::awt::event::MouseEvent mouseEvent){
}


    public: void mousePressed(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
this->logUtil.putF(this->commonStrings.START, this, MouseStrings::getInstance().MOUSE_PRESSED);
    
this->startPoint= PointFactory::getInstance().createXY(mouseEvent.getX(), mouseEvent.getY());
    
this->endPoint= this->startPoint;
    
}


    public: void mouseReleased(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
this->logUtil.putF(this->commonStrings.START, this, MouseStrings::getInstance().MOUSE_RELEASED);
    
this->endPoint= PointFactory::getInstance().createXY(mouseEvent.getX(), mouseEvent.getY());
    
this->active= false;
    
this->makeSelection();
    
}


    public: void mouseDragged(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell){
this->endPoint= PointFactory::getInstance().createXY(mouseEvent.getX(), mouseEvent.getY());
    
}


    public: void keyPressed(java::awt::event::KeyEvent keyEvent){

                        if(keyEvent.getKeyCode() == keyEvent.VK_CONTROL)
                        
                                    {
                                    this->controlIdDown= true;
    

                                    }
                                
}


    public: void keyReleased(java::awt::event::KeyEvent keyEvent){

                        if(keyEvent.getKeyCode() == keyEvent.VK_CONTROL)
                        
                                    {
                                    this->controlIdDown= false;
    

                                    }
                                
}


    public: void keyTyped(java::awt::event::KeyEvent keyEvent){
}


                //@Throws(Exception.constructor)
            
    public: GraphicItemInterface duplicate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

