
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
        



            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class KeyPressesAI: public BasicAI {
        

    private: on: bool = true;

    keys: std::vector<Integer>;

public constructor (Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.keys= new Array(hashtable.length);
    

    objectArray: std::vector<any> = HashtableUtil.getInstance()!.getKeysAsArray(hashtable)!;;
    

    size: int32_t = objectArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.keys[index]= hashtable.get(objectArray[index]!) as Integer;
    
}

}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){

                        if(this.on)
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < this.keys.length; index++)
        {
super.processKeyAI(this.keys[index]!.intValue());
    
}


                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public toggle(){

                        if(this.isOn())
                        
                                    {
                                    this.setOn(false);
    

                                    }
                                
                        else {
                            this.setOn(true);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public disable(){
this.setOn(false);
    
}


                //@Throws(Exception.constructor)
            
    public enable(){
this.setOn(true);
    
}


    setOn(bool on){
this.on= on;
    
}


    bool isOn(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.on;
    
}


};

            

