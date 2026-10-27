
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LockableFeature;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InApplicationPurchaseFactory
            : public virtual Object
         {

    private: static InApplicationPurchaseFactory* instance_owner();
    private: static InApplicationPurchaseFactory* instance;

    public: static InApplicationPurchaseFactory* getInstance();

private: InApplicationPurchaseFactory();

    public: void init(Object* anyType, Object* stateObject);

    public: void onCreate(Object* anyType, Object* stateObject);

    public: void onStart();

    public: void onResult(int32_t requestCode, int32_t resultCode, Object* data);
    public: void onResult(int32_t requestCode, int32_t resultCode, const std::string& data) { return onResult(requestCode, resultCode, JavaString::box(data)); }

    public: void onSaveState(Object* anyType);
    public: void onSaveState(const std::string& anyType) { return onSaveState(JavaString::box(anyType)); }

    public: void onStop();

    public: void onDestroy();

    public: void purchase(LockableFeature* lockableFeature);

    public: bool isPurchased(LockableFeature* lockableFeature);

    public: void add(LockableFeature* lockableFeature);

    public: std::string getUserName();

    public: bool isEnabled();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/LockableFeature.h")
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"
#endif

        #endif
    
