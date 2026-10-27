
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"

class GeographicMapCellType
            : public Object
         {

    public: static inline const std::vector<GeographicMapCellType*> NULL_GEOGRAPHIC_MAP_CELL_TYPE_ARRAY = {};

    public: static GeographicMapCellType* NULL_GEOGRAPHIC_MAP_CELL_TYPE() { static std::unique_ptr<GeographicMapCellType> value(new GeographicMapCellType(Integer.MIN_VALUE, 0)); return value.get(); }

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: int32_t type;

public: GeographicMapCellType(int32_t type, int32_t reset){
this->type= type;
    

                        if(type != Integer.MIN_VALUE)
                        
                                    {
                                    
    GeographicMapCellTypeFactory* geographicMapCellTypeFactory = GeographicMapCellTypeFactory::getInstance();;
    

    std::vector<GeographicMapCellType*> geographicMapCellTypeArray = geographicMapCellTypeFactory->getGeographicMapCellTypeArray();;
    

                        if(geographicMapCellTypeArray[type] == 
                                    nullptr
                                 || reset == 1)
                        
                                    {
                                    geographicMapCellTypeArray[type]= this;
    

                                    }
                                
                        else {
                            
                        if(reset !=  -1)
                        
                                    {
                                    


                            throw new RuntimeException();
                    

                                    }
                                

                        }
                            

                                    }
                                
}


    public: int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->type;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SmallIntegerSingletonFactory::getInstance()->getAt(this->type)->toString();;
    
}


};

            

