
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSDOMUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSDOMUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/tools/PointsDomUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/tools/PointsUtil.h"
#include "org/allbinary/graphics/j2me/workarea/tools/Document.h"


PointsDomUtil::PointsDomUtil() {
        }
        auto PointsDomUtil::instance_owner() -> PointsDomUtil* { static std::unique_ptr<PointsDomUtil> value(new PointsDomUtil()); return value.get(); }
PointsDomUtil* PointsDomUtil::instance = PointsDomUtil::instance_owner();

    auto PointsDomUtil::getInstance() -> PointsDomUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointsDomUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto PointsDomUtil::toDom(CanvasDom* canvasDom, BasicArrayList* pointVector) -> Node*{

    BasicArrayList* tempPointVector = PointsUtil::getInstance()->doTransforms(pointVector, double(canvasDom->getAngle()), PointFactory::getInstance()->createXY(canvasDom->getDimension()->getWidth(), canvasDom->getDimension()->getHeight()));;
    

    org::w3c::dom::Document* document = WorkAreaJPanel::getDocument();;
    

    Node* linesNode = dynamic_cast<Node*>(document->createElement(this->LINES));;
    

    int32_t size2 = tempPointVector->size();;
    

    int32_t size = pointVector->size();;
    

    GPoint* firstPoint = 
                null
            ;;
    

    GPoint* rotatedFirstPoint = 
                null
            ;;
    

    int32_t index = 0;;
    

                        if(index < size && index < size2)
                        
                                    {
                                    rotatedFirstPoint= dynamic_cast<GPoint*>(tempPointVector->get(index));
    
firstPoint= dynamic_cast<GPoint*>(pointVector->get(index));
    
index++;
    

                                    }
                                

        while(index < size && index < size2)
        {

    Node* lineNode = dynamic_cast<Node*>(document->createElement(this->LINE));;
    

    GPoint* rotatedSecondPoint = dynamic_cast<GPoint*>(tempPointVector->get(index));;
    

    GPoint* secondPoint = dynamic_cast<GPoint*>(pointVector->get(index));;
    

    Node* pointOneNode = this->getPointNode(firstPoint, this->POINTONE);;
    

    Node* pointTwoNode = this->getPointNode(secondPoint, this->POINTTWO);;
    

    Node* rotatedPointOneNode = this->getPointNode(rotatedFirstPoint, this->ROTATEDPOINTONE);;
    

    Node* rotatedPointTwoNode = this->getPointNode(rotatedSecondPoint, this->ROTATEDPOINTTWO);;
    
lineNode->appendChild(pointOneNode);
    
lineNode->appendChild(pointTwoNode);
    
lineNode->appendChild(rotatedPointOneNode);
    
lineNode->appendChild(rotatedPointTwoNode);
    
firstPoint= secondPoint;
    
rotatedFirstPoint= rotatedSecondPoint;
    
linesNode->appendChild(lineNode);
    
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return linesNode;
    
}


    auto PointsDomUtil::getPointNode(GPoint* point, std::string pointName) -> Node*{

    org::w3c::dom::Document* document = WorkAreaJPanel::getDocument();;
    

    Node* pointNode = dynamic_cast<Node*>(document->createElement(pointName));;
    

    Node* xNode = dynamic_cast<Node*>(document->createElement(PositionStrings::getInstance()->X));;
    

    Node* xTextNode = dynamic_cast<Node*>(document->createTextNode(std::to_string(getX)));;
    
xNode->appendChild(xTextNode);
    

    Node* yNode = dynamic_cast<Node*>(document->createElement(PositionStrings::getInstance()->Y));;
    

    Node* yTextNode = dynamic_cast<Node*>(document->createTextNode(std::to_string(getY)));;
    
yNode->appendChild(yTextNode);
    
pointNode->appendChild(xNode);
    
pointNode->appendChild(yNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pointNode;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSDOMUTIL_CPP
