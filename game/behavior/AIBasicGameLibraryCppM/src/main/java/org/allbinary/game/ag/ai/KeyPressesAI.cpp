
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
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class KeyPressesAI: public BasicAI {

    private: bool on = true;

    protected: std::vector<Integer> keys;

public: KeyPressesAI(ABHashtable<Object*, Object*> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->keys= std::vector<Integer>(hashtable.size());
    

    std::vector<Object*> objectArray = HashtableUtil::getInstance().getKeysAsArray(hashtable);;
    

    int32_t size = objectArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->keys[index]= hashtable.get(objectArray[index]);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager){

                        if(this->on)
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->keys.size(); index++)
        {
super.processKeyAI(this->keys[index].intValue());
    
}


                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void toggle(){

                        if(this->isOn())
                        
                                    {
                                    this->setOn(false);
    

                                    }
                                
                        else {
                            this->setOn(true);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void disable(){
this->setOn(false);
    
}


                //@Throws(Exception.constructor)
            
    public: void enable(){
this->setOn(true);
    
}


    private: void setOn(bool on){
this->on= on;
    
}


    protected: bool isOn(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->on;
    
}


};

            

