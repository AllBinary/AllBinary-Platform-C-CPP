
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class DisplayInfoSingleton;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class FormType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FormTypeFactory
            : public virtual Object
         {

    private: static FormTypeFactory* instance_owner();
    private: static FormTypeFactory* instance;

    public: static FormTypeFactory* getInstance();


            
    public: FormTypeFactory();
        
    public: const std::string UNK = "Unknown FormType";

    public: FormType* NULL_FORM_TYPE;

    public: FormType* TEMP_HORIZONTAL_FORM;

    public: FormType* HORIZONTAL_FORM;

    public: FormType* VERTICAL_CENTER_FORM;

    public: FormType* getFormType();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/graphics/form/FormType.h")
#include "org/allbinary/graphics/form/FormType.h"
#endif

        #endif
    
