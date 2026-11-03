
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASDOM_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASDOM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/animation/vector/VectorCenterGenerator.h>

      
#include <org/allbinary/dom/DomHelper.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/GraphicsStrings.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/Grid.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/Document.h"


CanvasDom::CanvasDom(Node* canvasNode) : graphicsStrings(GraphicsStrings::getInstance()){
this->grid= new Grid();
    
this->grid->grid= PointFactory::getInstance()->createXY(0, 0);
    
this->dimension= new IntegerDimension(0, 0);
    

    std::string name = canvasNode->getNodeName();;
    

                        if(name.compare(CanvasDom::FRAME) == 0)
                        
                                    {
                                    this->graphicItemHashMap= StdUtil::getInstance()->createHashMap();
    

    Node* angleNode = DomHelper::getInstance()->searchNodeList(this->ROTATE, canvasNode->getChildNodes());;
    

    Node* angleTextNode = angleNode->getFirstChild();;
    

    double angle = (double(angleTextNode->getNodeValue())).doubleValue();;
    
this->setAngle(angle);
    

    Node* sizeNode = DomHelper::getInstance()->searchNodeList(this->SIZE, canvasNode->getChildNodes());;
    

    Node* xNode = DomHelper::getInstance()->searchNodeList(this->X, sizeNode->getChildNodes());;
    

    Node* xTextNode = xNode->getFirstChild();;
    

    int32_t x = (int32_t(xTextNode->getNodeValue())).intValue();;
    

    Node* yNode = DomHelper::getInstance()->searchNodeList(this->Y, sizeNode->getChildNodes());;
    

    Node* yTextNode = yNode->getFirstChild();;
    

    int32_t y = (int32_t(yTextNode->getNodeValue())).intValue();;
    
this->setWorkArea(x, y);
    

    Node* zoomNode = DomHelper::getInstance()->searchNodeList(this->ZOOM, canvasNode->getChildNodes());;
    

    Node* zoomTextNode = zoomNode->getFirstChild();;
    
this->grid->setZoom((int32_t(zoomTextNode->getNodeValue())).intValue());
    

    Node* gridNode = DomHelper::getInstance()->searchNodeList(this->GRID, canvasNode->getChildNodes());;
    

    Node* gridSizeNode = DomHelper::getInstance()->searchNodeList(this->SIZE, gridNode->getChildNodes());;
    

    Node* gridXNode = DomHelper::getInstance()->searchNodeList(this->X, gridSizeNode->getChildNodes());;
    

    Node* gridXTextNode = gridXNode->getFirstChild();;
    

    int32_t gridX = (int32_t(gridXTextNode->getNodeValue())).intValue();;
    

    Node* gridYNode = DomHelper::getInstance()->searchNodeList(this->Y, gridSizeNode->getChildNodes());;
    

    Node* gridYTextNode = gridYNode->getFirstChild();;
    

    int32_t gridY = (int32_t(gridYTextNode->getNodeValue())).intValue();;
    
this->setGrid(gridX, gridY);
    

    Node* enableNode = DomHelper::getInstance()->searchNodeList(this->ENABLED, gridNode->getChildNodes());;
    

    Node* enableTextNode = enableNode->getFirstChild();;
    
this->grid->showGrid(().valueOf());
    

    Node* possibleNode = DomHelper::getInstance()->searchNodeList(this->POSSIBLE, gridNode->getChildNodes());;
    

    Node* possibleTextNode = possibleNode->getFirstChild();;
    
this->grid->isGridPossible= ().valueOf();
    

    BasicArrayList* graphicItemNodeList = DomHelper::getInstance()->getChildrenWithoutTextNodes(this->GRAPHICITEMS, canvasNode->getChildNodes());;
    

                        if(graphicItemNodeList != 
                                    nullptr
                                )
                        
                                    {
                                    this->graphicItemHashMap= GraphicItemFactory::getInstance()->getInstance(graphicItemNodeList);
    

                                    }
                                

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("Frame Element Not Found but Found: ") +JavaString::valueOf(name));
                    

                        }
                            
}


CanvasDom::CanvasDom(CanvasJPanel* canvasJPanel) : graphicsStrings(GraphicsStrings::getInstance()){
this->angle= canvasJPanel->getAngle();
    
this->graphicItemHashMap= canvasJPanel->getGraphicItemHashMap();
    
this->dimension= canvasJPanel->getCanvasDimension();
    
this->grid= new Grid(canvasJPanel->getGrid());
    
this->angle= canvasJPanel->getAngle();
    
}


    auto CanvasDom::getAngle() -> double{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->angle;
    
}


    auto CanvasDom::getGraphicItemHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->graphicItemHashMap;
    
}


    auto CanvasDom::setAngle(double angle) -> void{
this->angle= angle;
    
}


                //@Throws(Exception.constructor)
            
    auto CanvasDom::setWorkArea(int32_t x, int32_t y) -> void{
this->setDimension(new IntegerDimension(x, y));
    
}


                //@Throws(Exception.constructor)
            
    auto CanvasDom::setGrid(int32_t gridX, int32_t gridY) -> void{
this->grid->grid= PointFactory::getInstance()->createXY(gridX, gridY);
    
}


    auto CanvasDom::getPointNode(GPoint* point, std::string pointName) -> Node*{

    org::w3c::dom::Document* document = WorkAreaJPanel::getDocument();;
    

    Node* pointNode = dynamic_cast<Node*>(document->createElement(pointName));;
    

    Node* xNode = dynamic_cast<Node*>(document->createElement(this->X));;
    

    Node* xTextNode = dynamic_cast<Node*>(document->createTextNode(std::to_string(point->getX())));;
    
xNode->appendChild(xTextNode);
    

    Node* yNode = dynamic_cast<Node*>(document->createElement(this->Y));;
    

    Node* yTextNode = dynamic_cast<Node*>(document->createTextNode(std::to_string(point->getY())));;
    
yNode->appendChild(yTextNode);
    
pointNode->appendChild(xNode);
    
pointNode->appendChild(yNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return pointNode;
    
}


                //@Throws(Exception.constructor)
            
    auto CanvasDom::toDom() -> Node*{

    org::w3c::dom::Document* document = WorkAreaJPanel::getDocument();;
    

    Node* frameNode = dynamic_cast<Node*>(document->createElement(this->FRAME));;
    

    Node* angleNode = dynamic_cast<Node*>(document->createElement(this->ROTATE));;
    

    Node* angleTextNode = dynamic_cast<Node*>(document->createTextNode((double(this->getAngle())).toString()));;
    
angleNode->appendChild(angleTextNode);
    

    Node* sizeNode = dynamic_cast<Node*>(this->getPointNode(PointFactory::getInstance()->createXY(this->getDimension()->getWidth(), this->getDimension()->getHeight()), this->SIZE));;
    

    Node* zoomNode = dynamic_cast<Node*>(document->createElement(this->ZOOM));;
    

    Node* zoomTextNode = dynamic_cast<Node*>(document->createTextNode((int32_t(this->getGrid()->getZoom())).toString()));;
    
zoomNode->appendChild(zoomTextNode);
    

    Node* gridNode = dynamic_cast<Node*>(document->createElement(this->GRID));;
    

    Node* gridSizeNode = dynamic_cast<Node*>(this->getPointNode(this->getGrid()->grid, this->SIZE));;
    
gridNode->appendChild(gridSizeNode);
    

    Node* enableNode = dynamic_cast<Node*>(document->createElement(this->ENABLED));;
    

    Node* enableTextNode = dynamic_cast<Node*>(document->createTextNode(().toString()));;
    
enableNode->appendChild(enableTextNode);
    
gridNode->appendChild(enableNode);
    

    Node* possibleNode = dynamic_cast<Node*>(document->createElement(this->POSSIBLE));;
    

    Node* possibleTextNode = dynamic_cast<Node*>(document->createTextNode(().toString()));;
    
possibleNode->appendChild(possibleTextNode);
    
gridNode->appendChild(possibleNode);
    

    Node* realSizeNode = dynamic_cast<Node*>(document->createElement(REAL_SIZE));;
    

    VectorCenterGenerator* vectorCenterGenerator = new VectorCenterGenerator();;
    
vectorCenterGenerator->calculate(this->getGraphicItemHashMap());
    

    Node* widthNode = dynamic_cast<Node*>(document->createElement(this->graphicsStrings->WIDTH));;
    

    Node* widthTextNode = dynamic_cast<Node*>(document->createTextNode(std::to_string(vectorCenterGenerator->getWidth())));;
    
widthNode->appendChild(widthTextNode);
    
realSizeNode->appendChild(widthNode);
    

    Node* heightNode = dynamic_cast<Node*>(document->createElement(this->graphicsStrings->HEIGHT));;
    

    Node* heightTextNode = dynamic_cast<Node*>(document->createTextNode(std::to_string(vectorCenterGenerator->getHeight())));;
    
heightNode->appendChild(heightTextNode);
    
realSizeNode->appendChild(heightNode);
    
frameNode->appendChild(angleNode);
    
frameNode->appendChild(sizeNode);
    
frameNode->appendChild(zoomNode);
    
frameNode->appendChild(gridNode);
    
frameNode->appendChild(realSizeNode);
    

    Node* graphicItemNode = dynamic_cast<Node*>(document->createElement(this->GRAPHICITEMS));;
    

    std::vector<Object*> graphicItemArray = this->getGraphicItemHashMap()->keys().toArray();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface* item = dynamic_cast<GraphicItemInterface*>(this->graphicItemHashMap->get(graphicItemArray[index]));;
    

                        if(item->getName() == LinesGraphicItem::getStaticName())
                        
                                    {
                                    
                        if(item->isValid())
                        
                                    {
                                    graphicItemNode->appendChild(item->toDom(this));
    

                                    }
                                

                                    }
                                
}

frameNode->appendChild(graphicItemNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return frameNode;
    
}


    auto CanvasDom::getDimension() -> IntegerDimension*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->dimension;
    
}


    auto CanvasDom::setDimension(IntegerDimension* dimension) -> void{
this->dimension= dimension;
    
}


    auto CanvasDom::getGrid() -> Grid*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->grid;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASDOM_CPP
