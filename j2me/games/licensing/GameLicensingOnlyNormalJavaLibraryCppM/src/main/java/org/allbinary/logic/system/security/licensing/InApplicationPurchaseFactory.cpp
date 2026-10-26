
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LockableFeature.h"

class InApplicationPurchaseFactory
            : public Object
         {

    private: static InApplicationPurchaseFactory instance() { return InApplicationPurchaseFactory(); }

    public: static InApplicationPurchaseFactory getInstance(){



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


    public: void purchase(LockableFeature lockableFeature){
}


    public: bool isPurchased(LockableFeature lockableFeature){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: void add(LockableFeature lockableFeature){
}


    public: std::string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


    public: bool isEnabled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

