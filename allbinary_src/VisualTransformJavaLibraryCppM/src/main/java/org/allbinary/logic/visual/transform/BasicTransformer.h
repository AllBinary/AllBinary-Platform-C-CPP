
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMER_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
class URIResolver;
class BasicUriResolver;
class LogUtil;
class AbCrypt;
class KeySpecFactory;
class AbFileInputStream;
class StreamUtil;
class AbFile;
class AbPathData;
class PathUtil;
class StringMaker;
class AbKeys;
class AbeClientInformationInterface;
class TransformInfoInterface;
class TransformInfoTemplateData;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/AbTransformer.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicTransformer: public AbTransformer {

    /*protected*/ public: LogUtil* logUtil;

    private: StreamUtil* streamUtil;

    private: AbeClientInformationInterface* abeClientInformation;

public: BasicTransformer(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    private: void setEncryptedTemplateFileAsInputStream(AbFile* file);

                //@Throws(Exception.constructor)
            
    private: void setEncryptedTemplateAsInputStream();

                //@Throws(Exception.constructor)
            
    private: void setTemplateAsInputStream();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMER_H_COMPLETE
        #if __has_include(<java/io/ByteArrayInputStream.h>)
#include <java/io/ByteArrayInputStream.h>
#endif
#if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<javax/xml/transform/URIResolver.h>)
#include <javax/xml/transform/URIResolver.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/BasicUriResolver.h>)
#include <org/allbinary/data/tree/dom/BasicUriResolver.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/jcehelper/AbCrypt.h>)
#include <org/allbinary/logic/control/crypt/jcehelper/AbCrypt.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/jcehelper/KeySpecFactory.h>)
#include <org/allbinary/logic/control/crypt/jcehelper/KeySpecFactory.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileInputStream.h>)
#include <org/allbinary/logic/io/AbFileInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/PathUtil.h>)
#include <org/allbinary/logic/io/path/PathUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/AbKeys.h>)
#include <org/allbinary/logic/system/security/AbKeys.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h>)
#include <org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/AbTransformer.h")
#include "org/allbinary/logic/visual/transform/AbTransformer.h"
#endif

        #endif
    
