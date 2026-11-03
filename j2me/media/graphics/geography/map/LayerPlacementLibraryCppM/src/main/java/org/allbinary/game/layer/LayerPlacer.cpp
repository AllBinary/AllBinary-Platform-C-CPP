
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LAYERPLACER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_LAYERPLACER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/LayerPlacer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/Enumeration.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/LayerInterfaceFactory.h>

      
#include <org/allbinary/layer/LayerInterfaceVisitor.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/LayerPlacementInterface.h"
#include "org/allbinary/game/layer/LayerPlacementType.h"
#include "org/allbinary/game/layer/LayerPlacementTypeFactory.h"


LayerPlacer::LayerPlacer(LayerInterfaceVisitor* layerInterfaceVisitor, GPoint* dimension) : enumerationUtil(EnumerationUtil::getInstance()){
this->layerInterfaceVisitor= layerInterfaceVisitor;
    
this->dimension= dimension;
    
}


                //@Throws(Exception.constructor)
            
    auto LayerPlacer::processList(BasicArrayList* list) -> void{

    int32_t size = list->size();;
    

    LayerPlacementInterface* layerPlacementInterface;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
layerPlacementInterface= dynamic_cast<LayerPlacementInterface*>(list->objectArray[index]);
    
this->process(layerPlacementInterface);
    
}

}


                //@Throws(Exception.constructor)
            
    auto LayerPlacer::process(LayerPlacementInterface* layerPlacementInterface) -> void{

    GPoint* relativePoint = this->getPoint(layerPlacementInterface);;
    

    LayerInterfaceFactory* layerInterfaceFactory = LayerInterfaceFactory::getInstance();;
    

    ABHashtable<Object*, Object*>* hashtable = layerPlacementInterface->getInstance();;
    

    Enumeration<Object*>* enumeration = hashtable->keys();;
    

    GPoint* point;;
    

    ABHashtable<Object*, Object*>* layerHashtable;;
    

    int32_t x= 0;;
    

    int32_t y= 0;;
    

    int32_t z= 0;;
    

    AllBinaryLayer* layerInterface;;
    

        while(this->enumerationUtil->hasMoreElements(enumeration))
        {
point= dynamic_cast<GPoint*>(this->enumerationUtil->nextElement(enumeration));
    
layerHashtable= dynamic_cast<ABHashtable<Object*, Object*>*>(hashtable->get(point));
    
x= point->getX() +relativePoint->getX();
    
y= point->getY() +relativePoint->getY();
    
z= point->getZ() +relativePoint->getZ();
    
layerInterface= layerInterfaceFactory->getNexInstance(layerHashtable, x, y, z);
    
this->layerInterfaceVisitor->visit(layerInterface);
    
}

}


                //@Throws(Exception.constructor)
            
    auto LayerPlacer::getPoint(LayerPlacementInterface* layerPlacementInterface) -> GPoint*{

    PointFactory* pointFactory = PointFactory::getInstance();;
    

    LayerPlacementType* layerPlacementType = layerPlacementInterface->getLayerType();;
    

                        if(layerPlacementType == LayerPlacementTypeFactory::getInstance()->MAP)
                        
                                    {
                                    
    int32_t width = layerPlacementInterface->getWidth();;
    

    int32_t height = layerPlacementInterface->getHeight();;
    

    int32_t x = ((this->dimension->getX() -width) /2);;
    

    int32_t y = ((this->dimension->getY() -height) /2);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return pointFactory->createXY(x, y);;
    

                                    }
                                
                             else 
                        if(layerPlacementType == LayerPlacementTypeFactory::getInstance()->UP)
                        
                                    {
                                    
    int32_t width = layerPlacementInterface->getWidth();;
    

    int32_t height = layerPlacementInterface->getHeight();;
    

    int32_t x = ((this->dimension->getX() -width) /2);;
    

    int32_t y =  -height;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return pointFactory->createXY(x, y);;
    

                                    }
                                
                        else {
                            


                            throw Exception("PlacementType Not Recognized");
                    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_LAYER_LAYERPLACER_CPP
