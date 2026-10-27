
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_VECTORCENTERGENERATOR_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTOR_VECTORCENTERGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/vector/VectorCenterGenerator.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/Points.h>

      
#include <org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

VectorCenterGenerator::VectorCenterGenerator() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), minX(Integer.MAX_VALUE), minY(Integer.MAX_VALUE), maxX(Integer.MIN_VALUE), maxY(Integer.MIN_VALUE){
}


                //@Throws(Exception.constructor)
            
    auto VectorCenterGenerator::calculate(HashMap<Object*, Object*>* hashMap) -> void{

    std::vector<Object*> graphicItemArray = hashMap->keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface* item = dynamic_cast<GraphicItemInterface*>(hashMap->get(graphicItemArray[index]));;
    

                        if(item->getName() == LinesGraphicItem::getStaticName())
                        
                                    {
                                    this->getInstance(item->getPointsInterface()->getPoints());
    

                                    }
                                
}

this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("minX: ") +JavaString::valueOf(this->minX)) +JavaString::valueOf(" minY: ")) +JavaString::valueOf(this->minY)) +JavaString::valueOf(" maxX: ")) +JavaString::valueOf(this->maxX)) +JavaString::valueOf(" maxY: ")) +JavaString::valueOf(this->maxY), this, this->commonStrings->GET_INSTANCE);
    
this->setWidth(this->maxX -this->minX);
    
this->setHeight(this->maxY -this->minY);
    

    int32_t max = this->getWidth();;
    

                        if(getHeight() > max)
                        
                                    {
                                    max= this->getHeight();
    

                                    }
                                

    int32_t middle = max /2;;
    

    CommonLabels* commonLabels = CommonLabels::getInstance();;
    

    std::string s = (new StringMaker())->append(commonLabels->WIDTH_LABEL)->appendint(getWidth())->append(commonLabels->HEIGHT_LABEL)->appendint(getHeight())->append(" max: ")->appendint(max)->append(" middle: ")->appendint(middle)->toString();;
    
this->logUtil->putF(s, this, this->commonStrings->GET_INSTANCE);
    

    int32_t currentMiddleX = this->minX +this->getWidth() /2;;
    

    int32_t currentMiddleY = this->minY +this->getHeight() /2;;
    
this->dx= middle -currentMiddleX;
    
this->dy= middle -currentMiddleY;
    
}


                //@Throws(Exception.constructor)
            
    auto VectorCenterGenerator::transform(HashMap<Object*, Object*>* hashMap) -> void{
this->calculate(hashMap);
    
this->logUtil->putF((new StringMaker())->append(" dx: ")->appendint(this->dx)->append(" dy: ")->appendint(this->dy)->toString(), this, this->commonStrings->GET_INSTANCE);
    

    std::vector<Object*> graphicItemArray = hashMap->keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface* item = dynamic_cast<GraphicItemInterface*>(hashMap->get(graphicItemArray[index]));;
    

    BasicArrayList* list = VectorCenterGenerator::translate(item->getPointsInterface()->getPoints(), dx, dy);;
    

    Points* newPoints = new Points();;
    
newPoints->addPoints(list);
    
item->setPointsInterface(newPoints);
    
}

}


                //@Throws(Exception.constructor)
            
    auto VectorCenterGenerator::getInstance(BasicArrayList* pointVector) -> void{

        try {
            
    int32_t size = pointVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GPoint* point = dynamic_cast<GPoint*>(pointVector->get(index));;
    

                        if(point->getX() < this->minX)
                        
                                    {
                                    this->minX= point->getX();
    

                                    }
                                

                        if(point->getX() > this->maxX)
                        
                                    {
                                    this->maxX= point->getX();
    

                                    }
                                

                        if(point->getY() < this->minY)
                        
                                    {
                                    this->minY= point->getY();
    

                                    }
                                

                        if(point->getY() > this->maxY)
                        
                                    {
                                    this->maxY= point->getY();
    

                                    }
                                
}


                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, &e);
    



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto VectorCenterGenerator::translate(BasicArrayList* list, int32_t x, int32_t y) -> BasicArrayList*{

    BasicGraphicsPipeline* graphicsPipe = new BasicGraphicsPipeline(list);;
    
graphicsPipe->createMatrix();
    
graphicsPipe->translate(x, y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicsPipe->getMatrix();;
    
}


    auto VectorCenterGenerator::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->width;
    
}


    auto VectorCenterGenerator::setWidth(int32_t width) -> void{
this->width= width;
    
}


    auto VectorCenterGenerator::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->height;
    
}


    auto VectorCenterGenerator::setHeight(int32_t height) -> void{
this->height= height;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_VECTORCENTERGENERATOR_CPP
