
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
        



        #ifndef VIEWS_COMPOUND_COMPOUNDTRANSFORM_H
        #define VIEWS_COMPOUND_COMPOUNDTRANSFORM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>
class URIResolver;
class BasicUriResolver;
class StoreUriResolver;
class LogUtil;
class AbeClientInformationInterface;
class ServiceClientInformationInterfaceFactory;
#include <org/allbinary/logic/visual/transform/AbTransformer.h>
class TransformInfoInterface;
class CompoundContextTransformInfoObjectConfig;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CompoundTransform: public AbTransformer {

    /*protected*/ public: LogUtil* logUtil;

    private: AbeClientInformationInterface* abeClientInformation;

public: CompoundTransform(TransformInfoInterface* transformInfoInterface);

};

            


        #endif //VIEWS_COMPOUND_COMPOUNDTRANSFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_COMPOUND_COMPOUNDTRANSFORM_H_COMPLETE)
        #define VIEWS_COMPOUND_COMPOUNDTRANSFORM_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<javax/xml/transform/URIResolver.h>)
#include <javax/xml/transform/URIResolver.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/BasicUriResolver.h>)
#include <org/allbinary/data/tree/dom/BasicUriResolver.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/StoreUriResolver.h>)
#include <org/allbinary/data/tree/dom/StoreUriResolver.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/AbTransformer.h>)
#include <org/allbinary/logic/visual/transform/AbTransformer.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<views/compound/objectConfig/CompoundContextTransformInfoObjectConfig.h>)
#include <views/compound/objectConfig/CompoundContextTransformInfoObjectConfig.h>
#endif

        #endif
    
