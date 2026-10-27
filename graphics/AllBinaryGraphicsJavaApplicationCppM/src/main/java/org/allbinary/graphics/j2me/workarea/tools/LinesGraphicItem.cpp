
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEM_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
#include <java/awt.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
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

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"
#include "org/allbinary/graphics/j2me/workarea/tools/Color.h"
#include "org/allbinary/graphics/j2me/workarea/tools/Points.h"
#include "org/allbinary/graphics/j2me/workarea/tools/PointsDomUtil.h"
#include "org/allbinary/graphics/j2me/workarea/tools/Graphics2D.h"
#include "org/allbinary/graphics/j2me/workarea/tools/BasicStroke.h"
#include "org/allbinary/graphics/j2me/workarea/tools/PointsUtil.h"
#include "org/allbinary/graphics/j2me/workarea/tools/Graphics.h"
#include "org/allbinary/graphics/j2me/workarea/tools/MouseEvent.h"
#include "org/allbinary/graphics/j2me/workarea/tools/KeyEvent.h"


LinesGraphicItem::LinesGraphicItem() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), gameInputStrings(GameInputStrings::getInstance()), color(new Color(BasicColorFactory::getInstance()->WHITE->intValue())){
this->points= new Points();
    

        try {
            this->init();
    
this->active= true;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    
}

}


LinesGraphicItem::LinesGraphicItem(Node* linesNode) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), gameInputStrings(GameInputStrings::getInstance()), color(new Color(BasicColorFactory::getInstance()->WHITE->intValue())){
this->points= new Points();
    
this->init();
    
this->active= false;
    

    BasicArrayList* lineNodes = DomHelper::getInstance()->getWithoutTextNodes(linesNode->getChildNodes());;
    

    int32_t numberOfLines = lineNodes->size();;
    




                        for (
    int32_t index = 0;index < numberOfLines; index++)
        {

    Node* lineNode = dynamic_cast<Node*>(lineNodes->get(index));;
    

    BasicArrayList* pointNodes = DomHelper::getInstance()->getWithoutTextNodes(lineNode->getChildNodes());;
    

    Node* pointOneNode = DomHelper::getInstance()->searchNodeList(PointsDomUtil::getInstance()->POINTONE, pointNodes);;
    
this->addPoint(pointOneNode->getChildNodes());
    

                        if(index == numberOfLines -1)
                        
                                    {
                                    
    Node* pointTwoNode = DomHelper::getInstance()->searchNodeList(PointsDomUtil::getInstance()->POINTTWO, pointNodes);;
    
this->addPoint(pointTwoNode->getChildNodes());
    

                                    }
                                
}


                        if(numberOfLines == 0)
                        
                                    {
                                    


                            throw Exception("Lines node does not contain a line");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto LinesGraphicItem::init() -> void{
this->treeNode= new DefaultMutableTreeNode(PointsDomUtil::getInstance()->LINES +LinesGraphicItem::item);
    
LinesGraphicItem::item++;
    
this->points->init();
    
this->pointTreeNodeVector= new BasicArrayListD();
    
this->fulcrumPoint= PointFactory::getInstance()->createXY(0, 0);
    
}


                //@Throws(Exception.constructor)
            
    auto LinesGraphicItem::translate(int32_t x, int32_t y) -> void{
StatusFactory::getInstance()->setStatus(JavaString::valueOf("Translating: ") +JavaString::valueOf(this->points->getPoints()));
    

    BasicGraphicsPipeline* basicGraphicsPipeline = new BasicGraphicsPipeline(this->points->getPoints());;
    
basicGraphicsPipeline->translate(x, y);
    
this->points= new Points();
    
this->points->addPoints(basicGraphicsPipeline->getMatrix());
    
}


    auto LinesGraphicItem::setRotate(double theta) -> void{

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


    auto LinesGraphicItem::addRotate(double theta) -> void{
this->setRotate(this->theta +theta);
    
}


    auto LinesGraphicItem::setAngle(double angle) -> void{
this->setRotate(Math::toRadians(angle));
    
}


    auto LinesGraphicItem::addAngle(double angle) -> void{
this->setRotate(this->theta +Math::toRadians(angle));
    
}


    auto LinesGraphicItem::getTreeNode() -> MutableTreeNode*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<MutableTreeNode*>(this->treeNode);
    
}


    auto LinesGraphicItem::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LinesGraphicItem::NAME;
    
}


    auto LinesGraphicItem::getStaticName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LinesGraphicItem::NAME;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LinesGraphicItem::addPoint(NodeList* pointNodes) -> void{

    BasicArrayList* list = DomHelper::getInstance()->getWithoutTextNodes(pointNodes);;
    

    Node* xNode = DomHelper::getInstance()->searchNodeList(PositionStrings::getInstance()->X, list);;
    

    Node* xTextNode = xNode->getFirstChild();;
    

    int32_t xInteger = int32_t(xTextNode->getNodeValue());;
    

    Node* yNode = DomHelper::getInstance()->searchNodeList(PositionStrings::getInstance()->Y, list);;
    

    Node* yTextNode = yNode->getFirstChild();;
    

    int32_t yInteger = int32_t(yTextNode->getNodeValue());;
    

    GPoint* point = PointFactory::getInstance()->createXY(xInteger.intValue(), yInteger.intValue());;
    
this->addPoint(point);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LinesGraphicItem::addPoint(GPoint* point) -> void{
this->points->getPoints()->add(point);
    
this->logUtil->putF(point->toString(), this, "addPoint");
    
this->pointTreeNodeVector->add(new DefaultMutableTreeNode(point->toString()));
    
this->treeNode->add(dynamic_cast<DefaultMutableTreeNode*>(this->pointTreeNodeVector->get(this->pointTreeNodeVector->size() -1)));
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LinesGraphicItem::removePoint() -> GPoint*{

    GPoint* point = 
                null
            ;;
    

                        if(this->points->getSize() > 0)
                        
                                    {
                                    
    int32_t lastPoint = this->points->getSize() -1;;
    
point= dynamic_cast<GPoint*>(this->points->getPoints()->removeAt(lastPoint));
    

    int32_t index = this->pointTreeNodeVector->size() -1;;
    

                        if(index > 0)
                        
                                    {
                                    this->treeNode->remove(dynamic_cast<DefaultMutableTreeNode*>(this->pointTreeNodeVector->get(index)));
    
this->pointTreeNodeVector->remove(index);
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return point;
    
}


    auto LinesGraphicItem::isActive() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->active;
    
}


    auto LinesGraphicItem::deactivate() -> void{
this->active= false;
    
}


    auto LinesGraphicItem::activate() -> void{
this->active= true;
    
}


                //@Throws(Exception.constructor)
            
    auto LinesGraphicItem::duplicatePoints(BasicArrayList* list) -> void{

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GPoint* point = dynamic_cast<GPoint*>(list->get(index));;
    

                        if(point != 
                                    nullptr
                                )
                        
                                    {
                                    this->points->getPoints()->add(PointFactory::getInstance()->createXY(point->getX(), point->getY()));
    
this->pointTreeNodeVector->add(new DefaultMutableTreeNode(point->toString()));
    
this->treeNode->add(dynamic_cast<DefaultMutableTreeNode*>(this->pointTreeNodeVector->get(this->pointTreeNodeVector->size() -1)));
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto LinesGraphicItem::duplicate() -> GraphicItemInterface*{

    LinesGraphicItem* linesGraphicItem = new LinesGraphicItem();;
    
linesGraphicItem->duplicatePoints(this->points->getPoints());
    
linesGraphicItem->deactivate();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return linesGraphicItem;
    
}


    auto LinesGraphicItem::getAngle() -> double{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Math::toDegrees(this->theta);;
    
}


    auto LinesGraphicItem::setFulcrumPoint(GPoint* point) -> void{
this->fulcrumPoint= point;
    
}


    auto LinesGraphicItem::paint(Graphics* g, double canvasAngle, IntegerDimension* dimension, int32_t x, int32_t y) -> void{

        try {
            
    Graphics2D* graphics = dynamic_cast<Graphics2D*>(g);;
    
graphics->setColor(getColor());
    
graphics->setStroke(new BasicStroke(x));
    

                        if(this->isActive() && this->currentMousePoint != 
                                    nullptr
                                )
                        
                                    {
                                    this->points->getPoints()->add(this->currentMousePoint);
    

                                    }
                                

    BasicArrayList* tempPointVector = PointsUtil::getInstance()->doTransforms(this->points->getPoints(), canvasAngle, PointFactory::getInstance()->createXY(dimension->getWidth(), dimension->getHeight()));;
    

                        if(this->isActive() && this->currentMousePoint != 
                                    nullptr
                                )
                        
                                    {
                                    this->currentMousePoint= dynamic_cast<GPoint*>(this->points->getPoints()->removeAt(this->points->getSize() -1));
    

                                    }
                                

    int32_t size = tempPointVector->size();;
    

    GPoint* firstPoint = 
                null
            ;;
    

                        if(size > 0)
                        
                                    {
                                    firstPoint= dynamic_cast<GPoint*>(tempPointVector->get(0));
    

                                    }
                                




                        for (
    int32_t index = 1;index < size; index++)
        {

    GPoint* secondPoint = dynamic_cast<GPoint*>(tempPointVector->get(index));;
    
graphics->drawLine((firstPoint->getX() *x) -(x /4), (firstPoint->getY() *y) -(y /4), (secondPoint->getX() *x) -(x /4), (secondPoint->getY() *y) -(y /4));
    
firstPoint= secondPoint;
    
}


                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "mouseMoved", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto LinesGraphicItem::toDom(CanvasDom* canvasDom) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointsDomUtil::getInstance()->toDom(canvasDom, this->points->getPoints());;
    
}


    auto LinesGraphicItem::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->points->isValid();;
    
}


    auto LinesGraphicItem::getPointsInterface() -> Points*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->points;
    
}


    auto LinesGraphicItem::setPointsInterface(Points* points) -> void{
this->points= points;
    
}


    auto LinesGraphicItem::getColor() -> Color*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->color;
    
}


    auto LinesGraphicItem::setColor(Color* color) -> void{
this->color= color;
    
}


    auto LinesGraphicItem::mouseClicked(java::awt::event::MouseEvent* mouseEvent, int32_t x, int32_t y) -> void{

        try {
            
    GPoint* mousePoint = PointFactory::getInstance()->createXY(mouseEvent->getPoint()->x, mouseEvent->getPoint()->y);;
    

                        if((mouseEvent->getModifiers()&mouseEvent->BUTTON1_MASK) == mouseEvent->BUTTON1_MASK)
                        
                                    {
                                    
    GPoint* point = PointFactory::getInstance()->createXY(mousePoint->getX() /x, mousePoint->getY() /y);;
    
StatusFactory::getInstance()->setStatus(JavaString::valueOf("Line Point Added: ") +JavaString::valueOf(point->toString()));
    
this->addPoint(point);
    

                                    }
                                
                             else 
                        if((mouseEvent->getModifiers()&mouseEvent->BUTTON3_MASK) == mouseEvent->BUTTON3_MASK)
                        
                                    {
                                    StatusFactory::getInstance()->setStatus("Line Point Removed");
    
this->removePoint();
    

                                    }
                                
this->currentMousePoint= mousePoint;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "mouseMoved", &e);
    
}

}


    auto LinesGraphicItem::mouseEntered(java::awt::event::MouseEvent* mouseEvent) -> void{
}


    auto LinesGraphicItem::mouseExited(java::awt::event::MouseEvent* mouseEvent) -> void{
}


    auto LinesGraphicItem::mousePressed(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) -> void{
}


    auto LinesGraphicItem::mouseReleased(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) -> void{
}


    auto LinesGraphicItem::mouseDragged(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) -> void{
}


    auto LinesGraphicItem::mouseMoved(java::awt::event::MouseEvent* mouseEvent, int32_t x, int32_t y) -> void{

        try {
            
    GPoint* mousePoint = PointFactory::getInstance()->createXY(mouseEvent->getPoint()->x, mouseEvent->getPoint()->y);;
    

    GPoint* point = PointFactory::getInstance()->createXY(mousePoint->getX() /x, mousePoint->getY() /y);;
    
this->currentMousePoint= point;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "mouseMoved", &e);
    
}

}


    auto LinesGraphicItem::keyPressed(java::awt::event::KeyEvent* keyEvent) -> void{

        try {
            
    int32_t keyCode = keyEvent->getKeyCode();;
    

                        if(keyCode == keyEvent->VK_ESCAPE)
                        
                                    {
                                    StatusFactory::getInstance()->setStatus("Deactivated");
    
this->deactivate();
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent->VK_UP)
                        
                                    {
                                    this->translate(0,  -1);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent->VK_DOWN)
                        
                                    {
                                    this->translate(0, 1);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent->VK_LEFT)
                        
                                    {
                                    this->translate( -1, 0);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent->VK_RIGHT)
                        
                                    {
                                    this->translate(1, 0);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, gameInputStrings->KEY_PRESSED, &e);
    
}

}


    auto LinesGraphicItem::keyReleased(java::awt::event::KeyEvent* keyEvent) -> void{
}


    auto LinesGraphicItem::keyTyped(java::awt::event::KeyEvent* keyEvent) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEM_CPP
