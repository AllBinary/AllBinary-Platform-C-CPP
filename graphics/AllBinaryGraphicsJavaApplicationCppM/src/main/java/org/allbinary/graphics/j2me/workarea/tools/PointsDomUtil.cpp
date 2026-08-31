
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
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PointsUtil.h"
#include "Document.h"

class PointsDomUtil
            : public Object
         {
        

    private: static const instance: PointsDomUtil = new PointsDomUtil();

    public static PointsDomUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointsDomUtil.instance;
    
}


    public const LINES: string = "lines";

    public const POINTONE: string = "pointOne";

    public const POINTTWO: string = "pointTwo";

    private: const ROTATEDPOINTONE: string = "rotatedPointOne";

    private: const ROTATEDPOINTTWO: string = "rotatedPointTwo";

    private: const LINE: string = "line";

                //@Throws(Exception.constructor)
            
    public Node toDom(CanvasDom canvasDom, BasicArrayList pointVector){

    tempPointVector: BasicArrayList = PointsUtil.getInstance()!.doTransforms(pointVector, new number(canvasDom!.getAngle()), PointFactory.getInstance()!.createXY(canvasDom!.getDimension()!.getWidth(), canvasDom!.getDimension()!.getHeight()))!;;
    

    document: org.w3c.dom.Document = WorkAreaJPanel.getDocument()!;;
    

    linesNode: Node = document.createElement(this.LINES) as Node;;
    

    size2: int32_t = tempPointVector!.size()!;;
    

    size: int32_t = pointVector!.size()!;;
    

    firstPoint: GPoint = 
                null
            ;;
    

    rotatedFirstPoint: GPoint = 
                null
            ;;
    

    index: int32_t = 0;;
    

                        if(index < size && index < size2)
                        
                                    {
                                    rotatedFirstPoint= tempPointVector!.get(index) as GPoint;
    
firstPoint= pointVector!.get(index) as GPoint;
    
index++;
    

                                    }
                                

        while(index < size && index < size2)
        {

    lineNode: Node = document.createElement(this.LINE) as Node;;
    

    rotatedSecondPoint: GPoint = tempPointVector!.get(index) as GPoint;;
    

    secondPoint: GPoint = pointVector!.get(index) as GPoint;;
    

    pointOneNode: Node = this.getPointNode(firstPoint, this.POINTONE)!;;
    

    pointTwoNode: Node = this.getPointNode(secondPoint, this.POINTTWO)!;;
    

    rotatedPointOneNode: Node = this.getPointNode(rotatedFirstPoint, this.ROTATEDPOINTONE)!;;
    

    rotatedPointTwoNode: Node = this.getPointNode(rotatedSecondPoint, this.ROTATEDPOINTTWO)!;;
    
lineNode!.appendChild(pointOneNode);
    
lineNode!.appendChild(pointTwoNode);
    
lineNode!.appendChild(rotatedPointOneNode);
    
lineNode!.appendChild(rotatedPointTwoNode);
    
firstPoint= secondPoint;
    
rotatedFirstPoint= rotatedSecondPoint;
    
linesNode!.appendChild(lineNode);
    
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return linesNode;
    
}


    Node getPointNode(GPoint point, string pointName){

    document: org.w3c.dom.Document = WorkAreaJPanel.getDocument()!;;
    

    pointNode: Node = document.createElement(pointName) as Node;;
    

    xNode: Node = document.createElement(PositionStrings.getInstance()!.X) as Node;;
    

    xTextNode: Node = document.createTextNode(Integer.toString(point.getX())) as Node;;
    
xNode!.appendChild(xTextNode);
    

    yNode: Node = document.createElement(PositionStrings.getInstance()!.Y) as Node;;
    

    yTextNode: Node = document.createTextNode(Integer.toString(point.getY())) as Node;;
    
yNode!.appendChild(yTextNode);
    
pointNode!.appendChild(xNode);
    
pointNode!.appendChild(yNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pointNode;
    
}


};

            

