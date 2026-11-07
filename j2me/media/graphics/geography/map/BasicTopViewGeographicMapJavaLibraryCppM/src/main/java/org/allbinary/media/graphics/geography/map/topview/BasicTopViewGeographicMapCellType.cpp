
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPE_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapCellType.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

    auto BasicTopViewGeographicMapCellType::createType(std::string name, int32_t type, int32_t cost) -> BasicTopViewGeographicMapCellType*{

    BasicArrayList* types = new BasicArrayListS(1);;
    
types.add(type);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new BasicTopViewGeographicMapCellType(name, types, cost);
    
}


BasicTopViewGeographicMapCellType::BasicTopViewGeographicMapCellType(std::string name, BasicArrayList* types, int32_t cost) : logUtil(LogUtil::getInstance()){

    int32_t size = types.size();;
    

    std::vector<int32_t> typeArray = std::vector<int32_t>(size);;
    

    int32_t typeAsInteger;;
    

    int32_t type= 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
typeAsInteger= (JavaBoxes::unbox<int32_t>(types.get(index)));
    
type= typeAsInteger;
    

                        if(GeographicMapCellTypeFactory::getInstance()->getGeographicMapCellTypeArray()[type] == 
                                    nullptr
                                )
                        
                                    {
                                    new RaceTrackGeographicMapCellType(name, type, cost, 0);
    

                                    }
                                
                        else {
                            
                        }
                            
typeArray[index]= type;
    
}

this->name= name;
    
this->cost= cost;
    
this->types= typeArray;
    
}


    auto BasicTopViewGeographicMapCellType::isType(GeographicMapCellType* type) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->hasType(type->getType());;
    
}


    auto BasicTopViewGeographicMapCellType::hasType(int32_t type) -> bool{

    int32_t size = this->types.size();;
    




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


    auto BasicTopViewGeographicMapCellType::getTypes() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->types;
    
}


    auto BasicTopViewGeographicMapCellType::toString() -> std::string{

    StringMaker* stringMaker = new StringMaker();;
    

    int32_t size = this->types.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringMaker->appendint(this->types[index])->append(CommonSeps::getInstance()->COMMA);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringMaker);;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPE_CPP
