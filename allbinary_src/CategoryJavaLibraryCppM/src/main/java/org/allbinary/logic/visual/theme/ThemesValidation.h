
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESVALIDATION_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESVALIDATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

#include <org/allbinary/logic/control/validate/Validation.h>
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ThemesData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThemesValidation: public Validation, public virtual DomNodeInterface {

    private: BasicArrayList* themeVector;

public: ThemesValidation();

public: ThemesValidation(Node* node);

public: ThemesValidation(HashMap<Object*, Object*>* hashMap);

    public: bool isValid();

    public: std::string validationInfo();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESVALIDATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESVALIDATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESVALIDATION_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif

#if __has_include(<org/allbinary/logic/control/validate/Validation.h>)
#include <org/allbinary/logic/control/validate/Validation.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/visual/theme/ThemesData.h")
#include "org/allbinary/logic/visual/theme/ThemesData.h"
#endif

        #endif
    
