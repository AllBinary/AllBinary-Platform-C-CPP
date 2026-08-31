
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/debug/DebugFactory.h>

      
#include <org/allbinary/debug/NoDebug.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LicenseInitInfo
            : public Object
         {
        

    private: id: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: serverVector: BasicArrayList = new BasicArrayListD();

public constructor (){

            super();
        }


    public string getLicenseId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.id;
    
}


    public string getServer(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.serverVector!.objectArray[index]! as string;
    
}


    public int32_t getNumberOfServers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.serverVector!.size();;
    
}


    public setLicenseId(string value){
this.id= value;
    
}


    public clearServers(){
this.serverVector= new BasicArrayListD();
    
}


    public setServer(string value, int32_t index){
this.serverVector!.addAt(index, value);
    
}


    public addServer(string value){
this.serverVector!.add(value);
    
}


    public BasicArrayList getServerList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.serverVector;
    
}


    public setServerList(BasicArrayList servers){

                        if(DebugFactory.getInstance() == NoDebug.getInstance())
                        
                                    {
                                    this.serverVector= servers;
    

                                    }
                                
}


};

            

