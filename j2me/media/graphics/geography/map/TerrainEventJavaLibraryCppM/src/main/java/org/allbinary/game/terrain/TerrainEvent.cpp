
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/terrain/BasicTerrainInfo.h"

class TerrainEvent: public AllBinaryEventObject {

    private: BasicTerrainInfo* basicTerrainInfo = BasicTerrainInfo::NULL_BASIC_TERRAIN_INFO;

public: TerrainEvent(Object* basicTerrainInfo) : AllBinaryEventObject(basicTerrainInfo){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setBasicTerrainInfo(this->basicTerrainInfo);
    
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("TerrainEvent: \n");
    
stringBuffer->append("LayerInterface: ");
    
stringBuffer->append(this->basicTerrainInfo->toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    public: BasicTerrainInfo* getBasicTerrainInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicTerrainInfo;
    
}


    public: void setBasicTerrainInfo(BasicTerrainInfo* basicTerrainInfo){
this->basicTerrainInfo= basicTerrainInfo;
    
}


    public: void setBasicTerrainInfoForCircularStaticPool(BasicTerrainInfo* basicTerrainInfo){
this->basicTerrainInfo= basicTerrainInfo;
    
}


};

            

