
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
        

    public static const FRAME: string = "frame";

    public static const ROTATE: string = "rotate";

    public static const SIZE: string = "size";

    public static const X: string = "X";

    public static const Y: string = "Y";

    public static const ZOOM: string = "zoom";

    public static const GRID: string = "grid";

    public static const ENABLED: string = "enabled";

    public static const POSSIBLE: string = "possible";

    public static const GRAPHICITEMS: string = "graphicItems";

    public static const REAL_SIZE: string = "realSize";

    public static const WIDTH: string = "width";

    public static const HEIGHT: string = "height";

    private: graphicItemHashMap: HashMap<any, any>;

    private: angle: double;

    private: dimension: IntegerDimension;

    private: const grid: Grid;

public constructor (Node canvasNode){

            super();
        this.grid= new Grid();
    
this.grid.grid= PointFactory.getInstance()!.createXY(0, 0);
    
this.dimension= new IntegerDimension(0, 0);
    

    name: string = canvasNode!.getNodeName()!;;
    

                        if(name.compareTo(CanvasDom.FRAME) == 0)
                        
                                    {
                                    this.graphicItemHashMap= new HashMap<any, any>();
    

    angleNode: Node = DomHelper.getInstance()!.searchNodeList(this.ROTATE, canvasNode!.getChildNodes())!;;
    

    angleTextNode: Node = angleNode!.getFirstChild()!;;
    

    angle: double = new number(angleTextNode!.getNodeValue()).doubleValue()!;;
    
this.setAngle(angle);
    

    sizeNode: Node = DomHelper.getInstance()!.searchNodeList(this.SIZE, canvasNode!.getChildNodes())!;;
    

    xNode: Node = DomHelper.getInstance()!.searchNodeList(this.X, sizeNode!.getChildNodes())!;;
    

    xTextNode: Node = xNode!.getFirstChild()!;;
    

    x: int32_t = new Integer(xTextNode!.getNodeValue()).intValue()!;;
    

    yNode: Node = DomHelper.getInstance()!.searchNodeList(this.Y, sizeNode!.getChildNodes())!;;
    

    yTextNode: Node = yNode!.getFirstChild()!;;
    

    y: int32_t = new Integer(yTextNode!.getNodeValue()).intValue()!;;
    
this.setWorkArea(x, y);
    

    zoomNode: Node = DomHelper.getInstance()!.searchNodeList(this.ZOOM, canvasNode!.getChildNodes())!;;
    

    zoomTextNode: Node = zoomNode!.getFirstChild()!;;
    
this.grid.setZoom(new Integer(zoomTextNode!.getNodeValue()).intValue());
    

    gridNode: Node = DomHelper.getInstance()!.searchNodeList(this.GRID, canvasNode!.getChildNodes())!;;
    

    gridSizeNode: Node = DomHelper.getInstance()!.searchNodeList(this.SIZE, gridNode!.getChildNodes())!;;
    

    gridXNode: Node = DomHelper.getInstance()!.searchNodeList(this.X, gridSizeNode!.getChildNodes())!;;
    

    gridXTextNode: Node = gridXNode!.getFirstChild()!;;
    

    gridX: int32_t = new Integer(gridXTextNode!.getNodeValue()).intValue()!;;
    

    gridYNode: Node = DomHelper.getInstance()!.searchNodeList(this.Y, gridSizeNode!.getChildNodes())!;;
    

    gridYTextNode: Node = gridYNode!.getFirstChild()!;;
    

    gridY: int32_t = new Integer(gridYTextNode!.getNodeValue()).intValue()!;;
    
this.setGrid(gridX, gridY);
    

    enableNode: Node = DomHelper.getInstance()!.searchNodeList(this.ENABLED, gridNode!.getChildNodes())!;;
    

    enableTextNode: Node = enableNode!.getFirstChild()!;;
    
this.grid.showGrid(.valueOf());
    

    possibleNode: Node = DomHelper.getInstance()!.searchNodeList(this.POSSIBLE, gridNode!.getChildNodes())!;;
    

    possibleTextNode: Node = possibleNode!.getFirstChild()!;;
    
this.grid.isGridPossible= .valueOf();
    

    graphicItemNodeList: BasicArrayList = DomHelper.getInstance()!.getChildrenWithoutTextNodes(this.GRAPHICITEMS, canvasNode!.getChildNodes())!;;
    

                        if(graphicItemNodeList != 
                                    null
                                )
                        
                                    {
                                    this.graphicItemHashMap= GraphicItemFactory.getInstance()!.getInstance(graphicItemNodeList);
    

                                    }
                                

                                    }
                                
                        else {
                            


                            throw new Exception("Frame Element Not Found but Found: " +name);
                    

                        }
                            
}


public constructor (CanvasJPanel canvasJPanel){

            super();
        this.angle= canvasJPanel!.getAngle();
    
this.graphicItemHashMap= canvasJPanel!.getGraphicItemHashMap();
    
this.dimension= canvasJPanel!.getCanvasDimension();
    
this.grid= new Grid(canvasJPanel!.getGrid());
    
this.angle= canvasJPanel!.getAngle();
    
}


    public double getAngle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.angle;
    
}


    public HashMap<any, any> getGraphicItemHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.graphicItemHashMap;
    
}


    public setAngle(double angle){
this.angle= angle;
    
}


                //@Throws(Exception.constructor)
            
    public setWorkArea(int32_t x, int32_t y){
this.setDimension(new IntegerDimension(x, y));
    
}


                //@Throws(Exception.constructor)
            
    public setGrid(int32_t gridX, int32_t gridY){
this.grid.grid= PointFactory.getInstance()!.createXY(gridX, gridY);
    
}


    Node getPointNode(GPoint point, string pointName){

    document: org.w3c.dom.Document = WorkAreaJPanel.getDocument()!;;
    

    pointNode: Node = document.createElement(pointName) as Node;;
    

    xNode: Node = document.createElement(this.X) as Node;;
    

    xTextNode: Node = document.createTextNode(Integer.toString(point.getX())) as Node;;
    
xNode!.appendChild(xTextNode);
    

    yNode: Node = document.createElement(this.Y) as Node;;
    

    yTextNode: Node = document.createTextNode(Integer.toString(point.getY())) as Node;;
    
yNode!.appendChild(yTextNode);
    
pointNode!.appendChild(xNode);
    
pointNode!.appendChild(yNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pointNode;
    
}


                //@Throws(Exception.constructor)
            
    public Node toDom(){

    document: org.w3c.dom.Document = WorkAreaJPanel.getDocument()!;;
    

    frameNode: Node = document.createElement(this.FRAME) as Node;;
    

    angleNode: Node = document.createElement(this.ROTATE) as Node;;
    

    angleTextNode: Node = document.createTextNode(new number(this.getAngle()).toString()) as Node;;
    
angleNode!.appendChild(angleTextNode);
    

    sizeNode: Node = this.getPointNode(PointFactory.getInstance()!.createXY(this.getDimension()!.getWidth(), this.getDimension()!.getHeight()), this.SIZE) as Node;;
    

    zoomNode: Node = document.createElement(this.ZOOM) as Node;;
    

    zoomTextNode: Node = document.createTextNode(new Integer(this.getGrid()!.getZoom()).toString()) as Node;;
    
zoomNode!.appendChild(zoomTextNode);
    

    gridNode: Node = document.createElement(this.GRID) as Node;;
    

    gridSizeNode: Node = this.getPointNode(this.getGrid()!.grid, this.SIZE) as Node;;
    
gridNode!.appendChild(gridSizeNode);
    

    enableNode: Node = document.createElement(this.ENABLED) as Node;;
    

    enableTextNode: Node = document.createTextNode(.toString()) as Node;;
    
enableNode!.appendChild(enableTextNode);
    
gridNode!.appendChild(enableNode);
    

    possibleNode: Node = document.createElement(this.POSSIBLE) as Node;;
    

    possibleTextNode: Node = document.createTextNode(.toString()) as Node;;
    
possibleNode!.appendChild(possibleTextNode);
    
gridNode!.appendChild(possibleNode);
    

    realSizeNode: Node = document.createElement(REAL_SIZE) as Node;;
    

    vectorCenterGenerator: VectorCenterGenerator = new VectorCenterGenerator();;
    
vectorCenterGenerator!.calculate(this.getGraphicItemHashMap());
    

    widthNode: Node = document.createElement(WIDTH) as Node;;
    

    widthTextNode: Node = document.createTextNode(Integer.toString(vectorCenterGenerator!.getWidth())) as Node;;
    
widthNode!.appendChild(widthTextNode);
    
realSizeNode!.appendChild(widthNode);
    

    heightNode: Node = document.createElement(HEIGHT) as Node;;
    

    heightTextNode: Node = document.createTextNode(Integer.toString(vectorCenterGenerator!.getHeight())) as Node;;
    
heightNode!.appendChild(heightTextNode);
    
realSizeNode!.appendChild(heightNode);
    
frameNode!.appendChild(angleNode);
    
frameNode!.appendChild(sizeNode);
    
frameNode!.appendChild(zoomNode);
    
frameNode!.appendChild(gridNode);
    
frameNode!.appendChild(realSizeNode);
    

    graphicItemNode: Node = document.createElement(this.GRAPHICITEMS) as Node;;
    

    graphicItemArray: std::vector<any> = this.getGraphicItemHashMap()!.keys().()!;;
    

    size: int32_t = graphicItemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: GraphicItemInterface = this.graphicItemHashMap!.get(graphicItemArray[index]!) as GraphicItemInterface;;
    

                        if(item.getName() == LinesGraphicItem.getStaticName())
                        
                                    {
                                    
                        if(item.isValid())
                        
                                    {
                                    graphicItemNode!.appendChild(item.toDom(this));
    

                                    }
                                

                                    }
                                
}

frameNode!.appendChild(graphicItemNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return frameNode;
    
}


    public IntegerDimension getDimension(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.dimension;
    
}


    public setDimension(IntegerDimension dimension){
this.dimension= dimension;
    
}


    public Grid getGrid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.grid;
    
}


};

            

