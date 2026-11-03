
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_SELECTIONTOOL_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_SELECTIONTOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/tools/SelectionTool.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Double.h"
        
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
        #include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"
#include "org/allbinary/graphics/j2me/workarea/tools/Color.h"
#include "org/allbinary/graphics/j2me/workarea/tools/Points.h"
#include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h"
#include "org/allbinary/graphics/j2me/workarea/tools/Graphics.h"
#include "org/allbinary/graphics/j2me/workarea/tools/MouseEvent.h"
#include "org/allbinary/graphics/j2me/workarea/tools/MouseStrings.h"
#include "org/allbinary/graphics/j2me/workarea/tools/KeyEvent.h"


SelectionTool::SelectionTool(CanvasJPanel* canvasJPanel) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), rectColor(new Color(BasicColorFactory::getInstance()->RED->intValue())), startPoint(PointFactory::getInstance()->ZERO_ZERO), endPoint(this->startPoint){
this->canvasJPanel= canvasJPanel;
    
}


    auto SelectionTool::setColor(Color* color) -> void{
}


    auto SelectionTool::getTreeNode() -> MutableTreeNode*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto SelectionTool::getPointsInterface() -> Points*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto SelectionTool::setPointsInterface(Points* points) -> void{
}


    auto SelectionTool::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto SelectionTool::isActive() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->active;
    
}


    auto SelectionTool::deactivate() -> void{
}


    auto SelectionTool::activate() -> void{
}


    auto SelectionTool::setFulcrumPoint(GPoint* point) -> void{
}


                //@Throws(Exception.constructor)
            
    auto SelectionTool::translate(int32_t x, int32_t y) -> void{
}


    auto SelectionTool::setRotate(double theta) -> void{
}


    auto SelectionTool::addRotate(double theta) -> void{
}


    auto SelectionTool::setAngle(double angle) -> void{
}


    auto SelectionTool::addAngle(double angle) -> void{
}


    auto SelectionTool::getAngle() -> double{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto SelectionTool::makeSelection() -> void{

    int32_t xRect = this->getXRect();;
    

    int32_t xRect2 = Math::abs(this->endPoint->getX() -this->startPoint->getX()) +xRect;;
    

    int32_t yRect = this->getYRect();;
    

    int32_t yRect2 = Math::abs(this->endPoint->getY() -this->startPoint->getY()) +yRect;;
    

    HashMap<Object*, Object*>* hashMap = this->canvasJPanel->getGraphicItemHashMap();;
    

    std::vector<Object*> graphicItemArray = hashMap->keys().toArray();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface* item = dynamic_cast<GraphicItemInterface*>(hashMap->get(graphicItemArray[index]));;
    

                        if(item->getName() == LinesGraphicItem::getStaticName())
                        
                                    {
                                    
                        if(RectangleCollisionPointUtil::allPointsInsideCell(xRect, yRect, xRect2, yRect2, item->getPointsInterface()->getPoints(), this->canvasJPanel->getXPixelsPerWorkAreaPixel(), this->canvasJPanel->getYPixelsPerWorkAreaPixel()))
                        
                                    {
                                    item->setColor(Color::YELLOW);
    
item->activate();
    

                                    }
                                
                             else 
                        if(!this->controlIdDown)
                        
                                    {
                                    item->setColor(Color::WHITE);
    
item->deactivate();
    

                                    }
                                

                                    }
                                
}

}


    auto SelectionTool::getXRect() -> int32_t{

    int32_t xDiff = this->endPoint->getX() -this->startPoint->getX();;
    

    int32_t xRect = this->startPoint->getX();;
    

                        if(xDiff < 0)
                        
                                    {
                                    xRect= this->endPoint->getX();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return xRect;
    
}


    auto SelectionTool::getYRect() -> int32_t{

    int32_t yDiff = this->endPoint->getY() -this->startPoint->getY();;
    

    int32_t yRect = this->startPoint->getY();;
    

                        if(yDiff < 0)
                        
                                    {
                                    yRect= this->endPoint->getY();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return yRect;
    
}


    auto SelectionTool::paint(Graphics* g, double canvasAngle, IntegerDimension* dimension, int32_t x, int32_t y) -> void{
g->setColor(this->rectColor);
    

    int32_t xRect = this->getXRect();;
    

    int32_t width = Math::abs(this->endPoint->getX() -this->startPoint->getX());;
    

    int32_t yRect = this->getYRect();;
    

    int32_t height = Math::abs(this->endPoint->getY() -this->startPoint->getY());;
    
g->drawRect(xRect, yRect, width, height);
    
}


                //@Throws(Exception.constructor)
            
    auto SelectionTool::toDom(CanvasDom* canvasDom) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto SelectionTool::removePoint() -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto SelectionTool::addPoint(GPoint* point) -> void{
}


    auto SelectionTool::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SelectionTool::NAME;
    
}


    auto SelectionTool::getStaticName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SelectionTool::NAME;
    
}


    auto SelectionTool::mouseClicked(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) -> void{
}


    auto SelectionTool::mouseMoved(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) -> void{
}


    auto SelectionTool::mouseEntered(java::awt::event::MouseEvent* mouseEvent) -> void{
}


    auto SelectionTool::mouseExited(java::awt::event::MouseEvent* mouseEvent) -> void{
}


    auto SelectionTool::mousePressed(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) -> void{
this->logUtil->putF(this->commonStrings->START, this, MouseStrings::getInstance()->MOUSE_PRESSED);
    
this->startPoint= PointFactory::getInstance()->createXY(mouseEvent->getX(), mouseEvent->getY());
    
this->endPoint= this->startPoint;
    
}


    auto SelectionTool::mouseReleased(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) -> void{
this->logUtil->putF(this->commonStrings->START, this, MouseStrings::getInstance()->MOUSE_RELEASED);
    
this->endPoint= PointFactory::getInstance()->createXY(mouseEvent->getX(), mouseEvent->getY());
    
this->active= false;
    
this->makeSelection();
    
}


    auto SelectionTool::mouseDragged(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) -> void{
this->endPoint= PointFactory::getInstance()->createXY(mouseEvent->getX(), mouseEvent->getY());
    
}


    auto SelectionTool::keyPressed(java::awt::event::KeyEvent* keyEvent) -> void{

                        if(keyEvent->getKeyCode() == keyEvent->VK_CONTROL)
                        
                                    {
                                    this->controlIdDown= true;
    

                                    }
                                
}


    auto SelectionTool::keyReleased(java::awt::event::KeyEvent* keyEvent) -> void{

                        if(keyEvent->getKeyCode() == keyEvent->VK_CONTROL)
                        
                                    {
                                    this->controlIdDown= false;
    

                                    }
                                
}


    auto SelectionTool::keyTyped(java::awt::event::KeyEvent* keyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto SelectionTool::duplicate() -> GraphicItemInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_SELECTIONTOOL_CPP
