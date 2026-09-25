
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
        
            #include "../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../java/lang/Double.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/animation/vector/VectorCenterGenerator.h>

      
#include <org/allbinary/dom/DomHelper.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IntegerDimension.h"
#include "Grid.h"
#include "CanvasJPanel.h"
#include "Document.h"

class CanvasDom
            : public Object
         {

    public: static const std::string FRAME = "frame";

    public: static const std::string ROTATE = "rotate";

    public: static const std::string SIZE = "size";

    public: static const std::string X = "X";

    public: static const std::string Y = "Y";

    public: static const std::string ZOOM = "zoom";

    public: static const std::string GRID = "grid";

    public: static const std::string ENABLED = "enabled";

    public: static const std::string POSSIBLE = "possible";

    public: static const std::string GRAPHICITEMS = "graphicItems";

    public: static const std::string REAL_SIZE = "realSize";

    public: static const std::string WIDTH = "width";

    public: static const std::string HEIGHT = "height";

    private: HashMap<any, any> graphicItemHashMap;

    private: double angle;

    private: IntegerDimension dimension;

    private: Grid grid;

public: CanvasDom(Node canvasNode){
this->grid= Grid();
    
this->grid.grid= PointFactory::getInstance().createXY(0, 0);
    
this->dimension= IntegerDimension(0, 0);
    

    std::string name = canvasNode.getNodeName();;
    

                        if(name.compareTo(CanvasDom::FRAME) == 0)
                        
                                    {
                                    this->graphicItemHashMap= StdUtil::getInstance().createHashMap();
    

    Node angleNode = DomHelper::getInstance().searchNodeList(this->ROTATE, canvasNode.getChildNodes());;
    

    Node angleTextNode = angleNode.getFirstChild();;
    

    double angle = number(angleTextNode.getNodeValue()).doubleValue();;
    
this->setAngle(angle);
    

    Node sizeNode = DomHelper::getInstance().searchNodeList(this->SIZE, canvasNode.getChildNodes());;
    

    Node xNode = DomHelper::getInstance().searchNodeList(this->X, sizeNode.getChildNodes());;
    

    Node xTextNode = xNode.getFirstChild();;
    

    int32_t x = Integer(xTextNode.getNodeValue()).intValue();;
    

    Node yNode = DomHelper::getInstance().searchNodeList(this->Y, sizeNode.getChildNodes());;
    

    Node yTextNode = yNode.getFirstChild();;
    

    int32_t y = Integer(yTextNode.getNodeValue()).intValue();;
    
this->setWorkArea(x, y);
    

    Node zoomNode = DomHelper::getInstance().searchNodeList(this->ZOOM, canvasNode.getChildNodes());;
    

    Node zoomTextNode = zoomNode.getFirstChild();;
    
this->grid.setZoom(Integer(zoomTextNode.getNodeValue()).intValue());
    

    Node gridNode = DomHelper::getInstance().searchNodeList(this->GRID, canvasNode.getChildNodes());;
    

    Node gridSizeNode = DomHelper::getInstance().searchNodeList(this->SIZE, gridNode.getChildNodes());;
    

    Node gridXNode = DomHelper::getInstance().searchNodeList(this->X, gridSizeNode.getChildNodes());;
    

    Node gridXTextNode = gridXNode.getFirstChild();;
    

    int32_t gridX = Integer(gridXTextNode.getNodeValue()).intValue();;
    

    Node gridYNode = DomHelper::getInstance().searchNodeList(this->Y, gridSizeNode.getChildNodes());;
    

    Node gridYTextNode = gridYNode.getFirstChild();;
    

    int32_t gridY = Integer(gridYTextNode.getNodeValue()).intValue();;
    
this->setGrid(gridX, gridY);
    

    Node enableNode = DomHelper::getInstance().searchNodeList(this->ENABLED, gridNode.getChildNodes());;
    

    Node enableTextNode = enableNode.getFirstChild();;
    
this->grid.showGrid(.valueOf());
    

    Node possibleNode = DomHelper::getInstance().searchNodeList(this->POSSIBLE, gridNode.getChildNodes());;
    

    Node possibleTextNode = possibleNode.getFirstChild();;
    
this->grid.isGridPossible= .valueOf();
    

    BasicArrayList graphicItemNodeList = DomHelper::getInstance().getChildrenWithoutTextNodes(this->GRAPHICITEMS, canvasNode.getChildNodes());;
    

                        if(graphicItemNodeList != 
                                    nullptr
                                )
                        
                                    {
                                    this->graphicItemHashMap= GraphicItemFactory::getInstance().getInstance(graphicItemNodeList);
    

                                    }
                                

                                    }
                                
                        else {
                            


                            throw Exception("Frame Element Not Found but Found: " +name);
                    

                        }
                            
}


public: CanvasDom(CanvasJPanel canvasJPanel){
this->angle= canvasJPanel.getAngle();
    
this->graphicItemHashMap= canvasJPanel.getGraphicItemHashMap();
    
this->dimension= canvasJPanel.getCanvasDimension();
    
this->grid= Grid(canvasJPanel.getGrid());
    
this->angle= canvasJPanel.getAngle();
    
}


    public: double getAngle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->angle;
    
}


    public: HashMap<any, any> getGraphicItemHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->graphicItemHashMap;
    
}


    public: void setAngle(double angle){
this->angle= angle;
    
}


                //@Throws(Exception.constructor)
            
    public: void setWorkArea(int32_t x, int32_t y){
this->setDimension(IntegerDimension(x, y));
    
}


                //@Throws(Exception.constructor)
            
    public: void setGrid(int32_t gridX, int32_t gridY){
this->grid.grid= PointFactory::getInstance().createXY(gridX, gridY);
    
}


    private: Node getPointNode(GPoint point, std::string pointName){

    org::w3c::dom::Document document = WorkAreaJPanel::getDocument();;
    

    Node pointNode = document.createElement(pointName) as Node;;
    

    Node xNode = document.createElement(this->X) as Node;;
    

    Node xTextNode = document.createTextNode(std::to_string(getX)) as Node;;
    
xNode.appendChild(xTextNode);
    

    Node yNode = document.createElement(this->Y) as Node;;
    

    Node yTextNode = document.createTextNode(std::to_string(getY)) as Node;;
    
yNode.appendChild(yTextNode);
    
pointNode.appendChild(xNode);
    
pointNode.appendChild(yNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pointNode;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toDom(){

    org::w3c::dom::Document document = WorkAreaJPanel::getDocument();;
    

    Node frameNode = document.createElement(this->FRAME) as Node;;
    

    Node angleNode = document.createElement(this->ROTATE) as Node;;
    

    Node angleTextNode = document.createTextNode(number(this->getAngle()).toString()) as Node;;
    
angleNode.appendChild(angleTextNode);
    

    Node sizeNode = this->getPointNode(PointFactory::getInstance().createXY(this->getDimension().getWidth(), this->getDimension().getHeight()), this->SIZE) as Node;;
    

    Node zoomNode = document.createElement(this->ZOOM) as Node;;
    

    Node zoomTextNode = document.createTextNode(Integer(this->getGrid().getZoom()).toString()) as Node;;
    
zoomNode.appendChild(zoomTextNode);
    

    Node gridNode = document.createElement(this->GRID) as Node;;
    

    Node gridSizeNode = this->getPointNode(this->getGrid().grid, this->SIZE) as Node;;
    
gridNode.appendChild(gridSizeNode);
    

    Node enableNode = document.createElement(this->ENABLED) as Node;;
    

    Node enableTextNode = document.createTextNode(.toString()) as Node;;
    
enableNode.appendChild(enableTextNode);
    
gridNode.appendChild(enableNode);
    

    Node possibleNode = document.createElement(this->POSSIBLE) as Node;;
    

    Node possibleTextNode = document.createTextNode(.toString()) as Node;;
    
possibleNode.appendChild(possibleTextNode);
    
gridNode.appendChild(possibleNode);
    

    Node realSizeNode = document.createElement(REAL_SIZE) as Node;;
    

    VectorCenterGenerator vectorCenterGenerator = VectorCenterGenerator();;
    
vectorCenterGenerator.calculate(this->getGraphicItemHashMap());
    

    Node widthNode = document.createElement(WIDTH) as Node;;
    

    Node widthTextNode = document.createTextNode(std::to_string(getWidth)) as Node;;
    
widthNode.appendChild(widthTextNode);
    
realSizeNode.appendChild(widthNode);
    

    Node heightNode = document.createElement(HEIGHT) as Node;;
    

    Node heightTextNode = document.createTextNode(std::to_string(getHeight)) as Node;;
    
heightNode.appendChild(heightTextNode);
    
realSizeNode.appendChild(heightNode);
    
frameNode.appendChild(angleNode);
    
frameNode.appendChild(sizeNode);
    
frameNode.appendChild(zoomNode);
    
frameNode.appendChild(gridNode);
    
frameNode.appendChild(realSizeNode);
    

    Node graphicItemNode = document.createElement(this->GRAPHICITEMS) as Node;;
    

    std::vector<Object*> graphicItemArray = this->getGraphicItemHashMap().keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface item = this->graphicItemHashMap.get(graphicItemArray[index]!) as GraphicItemInterface;;
    

                        if(item.getName() == LinesGraphicItem::getStaticName())
                        
                                    {
                                    
                        if(item.isValid())
                        
                                    {
                                    graphicItemNode.appendChild(item.toDom(this));
    

                                    }
                                

                                    }
                                
}

frameNode.appendChild(graphicItemNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return frameNode;
    
}


    public: IntegerDimension getDimension(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dimension;
    
}


    public: void setDimension(IntegerDimension dimension){
this->dimension= dimension;
    
}


    public: Grid getGrid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->grid;
    
}


};

            

