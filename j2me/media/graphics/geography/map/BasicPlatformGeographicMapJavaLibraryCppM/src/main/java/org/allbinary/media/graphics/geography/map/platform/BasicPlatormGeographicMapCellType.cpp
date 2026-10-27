
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPE_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/platform/BasicPlatormGeographicMapCellType.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

    auto BasicPlatormGeographicMapCellType::createType(int32_t type) -> BasicPlatormGeographicMapCellType*{

    BasicArrayList* types = new BasicArrayListS(1);;
    
types->add(SmallIntegerSingletonFactory::getInstance()->getAt(type));
    

    BasicPlatormGeographicMapCellType* basicPlatormGeographicMapCellType = new BasicPlatormGeographicMapCellType(types);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicPlatormGeographicMapCellType;
    
}


BasicPlatormGeographicMapCellType::BasicPlatormGeographicMapCellType(BasicArrayList* types){

    int32_t size = types->size();;
    

    std::vector<int32_t> typeArray = std::vector<int32_t>(size);;
    

    int32_t typeAsInteger;;
    

    int32_t type= 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
typeAsInteger= (types->get(index));
    
type= typeAsInteger.intValue();
    
new GeographicMapCellType(type, 0);
    
typeArray[index]= type;
    
}

this->types= typeArray;
    
}


    auto BasicPlatormGeographicMapCellType::isType(GeographicMapCellType* type) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hasType(type->getType());;
    
}


    auto BasicPlatormGeographicMapCellType::hasType(int32_t type) -> bool{

    int32_t size = types->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(this->types[index] == type)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPE_CPP
