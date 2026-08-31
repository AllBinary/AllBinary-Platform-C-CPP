
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
        



#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTerrainInfo.h"

class TerrainEvent: public AllBinaryEventObject {
        

    private: basicTerrainInfo: BasicTerrainInfo = BasicTerrainInfo.NULL_BASIC_TERRAIN_INFO;

public constructor (any = {} basicTerrainInfo){
            super(basicTerrainInfo);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setBasicTerrainInfo(this.basicTerrainInfo);
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("TerrainEvent: \n");
    
stringBuffer!.append("LayerInterface: ");
    
stringBuffer!.append(this.basicTerrainInfo!.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public BasicTerrainInfo getBasicTerrainInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicTerrainInfo;
    
}


    public setBasicTerrainInfo(BasicTerrainInfo basicTerrainInfo){
this.basicTerrainInfo= basicTerrainInfo;
    
}


    public setBasicTerrainInfoForCircularStaticPool(BasicTerrainInfo basicTerrainInfo){
this.basicTerrainInfo= basicTerrainInfo;
    
}


};

            

