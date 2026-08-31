
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_H

            #include "../../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LockableFeature.h"

class InApplicationPurchaseFactory
            : public Object
         {
        

    private: static const instance: InApplicationPurchaseFactory = new InApplicationPurchaseFactory();

    public static InApplicationPurchaseFactory getInstance();

private constructor ();

    public init(any = {} anyType, any = {} stateObject);

    public onCreate(any = {} anyType, any = {} stateObject);

    public onStart();

    public onResult(int32_t requestCode, int32_t resultCode, any = {} data);

    public onSaveState(any = {} anyType);

    public onStop();

    public onDestroy();

    public purchase(LockableFeature lockableFeature);

    public bool isPurchased(LockableFeature lockableFeature);

    public add(LockableFeature lockableFeature);

    public string getUserName();

    public bool isEnabled();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_H
