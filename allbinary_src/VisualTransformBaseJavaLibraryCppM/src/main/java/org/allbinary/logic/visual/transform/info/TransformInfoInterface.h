
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
#include <org/allbinary/data/tables/TableMappingInterface.h>
class AbPath;
class TransformInfoObjectConfigInterface;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoInterface: public virtual TableMappingInterface {

    public: virtual std::string log() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void override(HashMap<Object*, Object*>* hashMap) = 0;

    public: virtual std::string getName() = 0;

    public: virtual void setStoreName(std::string value) = 0;

    public: virtual std::string getStoreName() = 0;

    public: virtual std::string getObjectFile() = 0;

    public: virtual Object* getObject() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AbPath* getTemplateFilePath() = 0;

    public: virtual std::string getTemplateFile() = 0;

    public: virtual std::string getTemplate() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AbPath* getDataFilePath() = 0;

    public: virtual std::string getDataFile() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual Document* getDataDocument() = 0;

    public: virtual void setName(std::string value) = 0;

    public: virtual void setObjectFile(std::string value) = 0;

    public: virtual void setObject(Object* anyType) = 0;
    public: void setObject(const std::string& anyType) { return setObject(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void setObject(BoxValue anyType) { return setObject(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void setObject(const std::vector<BoxElement>& anyType) { return setObject(JavaBoxes::toObject(anyType)); }

                //@Throws(Exception.constructor)
            
    public: virtual void setObjectConfigInterface(TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual TransformInfoObjectConfigInterface* getObjectConfigInterface() = 0;

    public: virtual void setTemplateFile(std::string value) = 0;

    public: virtual void setTemplate(std::string value) = 0;

    public: virtual void setDataFile(std::string value) = 0;

    public: virtual void setData(std::string value) = 0;

    public: virtual void setChild() = 0;

    public: virtual bool isChild() = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOINTERFACE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/data/tables/TableMappingInterface.h>)
#include <org/allbinary/data/tables/TableMappingInterface.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif

        #endif
    
