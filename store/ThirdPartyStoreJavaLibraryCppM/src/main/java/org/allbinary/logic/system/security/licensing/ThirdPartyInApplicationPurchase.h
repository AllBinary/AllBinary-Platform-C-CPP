
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/ThirdPartyInApplicationPurchaseInterface.h"
class LockableFeature;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThirdPartyInApplicationPurchase
            : public virtual Object
        , public virtual ThirdPartyInApplicationPurchaseInterface {


            
    public: ThirdPartyInApplicationPurchase();
        
    public: bool isPurchased(LockableFeature* lockableFeature);

    public: void onCreate(Object* anyType, Object* stateObject);
    public: void onCreate(const std::string& anyType, Object* stateObject) { return onCreate(JavaString::box(anyType), stateObject); }

    public: void onDestroy();

    public: void onStart();

    public: void onActivityResult(int32_t requestCode, int32_t resultCode, Object* dataObject);
    public: void onActivityResult(int32_t requestCode, int32_t resultCode, const std::string& dataObject) { return onActivityResult(requestCode, resultCode, JavaString::box(dataObject)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void onActivityResult(int32_t requestCode, int32_t resultCode, BoxValue dataObject) { return onActivityResult(requestCode, resultCode, JavaBoxes::toObject(dataObject)); }
    public: template<typename BoxElement> void onActivityResult(int32_t requestCode, int32_t resultCode, const std::vector<BoxElement>& dataObject) { return onActivityResult(requestCode, resultCode, JavaBoxes::toObject(dataObject)); }

    public: void onSaveInstanceState(Object* anyType);
    public: void onSaveInstanceState(const std::string& anyType) { return onSaveInstanceState(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void onSaveInstanceState(BoxValue anyType) { return onSaveInstanceState(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void onSaveInstanceState(const std::vector<BoxElement>& anyType) { return onSaveInstanceState(JavaBoxes::toObject(anyType)); }

    public: void onStop();

    public: void requestPurchase(LockableFeature* lockableFeature);

    public: void requestReceipts();

    public: void add(LockableFeature* lockableFeature);

    public: std::string getUserName();

    public: bool isEnabled();

    /*protected*/ public: void requestProducts();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/ThirdPartyInApplicationPurchaseInterface.h")
#include "org/allbinary/logic/system/security/licensing/ThirdPartyInApplicationPurchaseInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/LockableFeature.h")
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"
#endif

        #endif
    
