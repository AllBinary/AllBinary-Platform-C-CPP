
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2022 AllBinary
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_ABXSLHELPER_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_ABXSLHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>
class StreamResult;
class StreamSource;
class AbFile;
class AbPath;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class XslHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbXslHelper
            : public virtual Object
         {

    private: static AbXslHelper* instance_owner();
    private: static AbXslHelper* instance;

    public: static AbXslHelper* getInstance();


            
    public: AbXslHelper();
        
                //@Throws(Exception.constructor)
            
    public: std::string translate(AbFile* xslFile, AbFile* xmlFile);

                //@Throws(Exception.constructor)
            
    public: std::string translate(AbPath* xslPath, AbPath* xmlPath);

                //@Throws(Exception.constructor)
            
    public: std::string translate(std::string xsltFilePath, std::string xmlFilePath);

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_ABXSLHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_ABXSLHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_ABXSLHELPER_H_COMPLETE
        #if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<javax/xml/transform/stream/StreamResult.h>)
#include <javax/xml/transform/stream/StreamResult.h>
#endif
#if __has_include(<javax/xml/transform/stream/StreamSource.h>)
#include <javax/xml/transform/stream/StreamSource.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include("org/allbinary/data/tree/dom/XslHelper.h")
#include "org/allbinary/data/tree/dom/XslHelper.h"
#endif

        #endif
    
