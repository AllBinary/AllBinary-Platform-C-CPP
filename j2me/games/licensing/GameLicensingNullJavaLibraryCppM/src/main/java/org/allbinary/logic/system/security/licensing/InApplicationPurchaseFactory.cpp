
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
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/LockableFeature.h"

class InApplicationPurchaseFactory
            : public Object
         {

    private: static InApplicationPurchaseFactory* instance() { static std::unique_ptr<InApplicationPurchaseFactory> value(new InApplicationPurchaseFactory()); return value.get(); }

    public: static InApplicationPurchaseFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InApplicationPurchaseFactory::instance();
    
}


private: InApplicationPurchaseFactory(){
}


    public: void init(Object* anyType, Object* stateObject){
}


    public: void onCreate(Object* anyType, Object* stateObject){
}


    public: void onStart(){
}


    public: void onResult(int32_t requestCode, int32_t resultCode, Object* data){
}


    public: void onSaveState(Object* anyType){
}


    public: void onStop(){
}


    public: void onDestroy(){
}


    public: void purchase(LockableFeature* lockableFeature){
}


    public: bool isPurchased(LockableFeature* lockableFeature){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void add(LockableFeature* lockableFeature){
}


    public: std::string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    public: bool isEnabled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

