
        /* Generated Code Do Not Modify */
        



        #ifndef JAVA_LANG_ANNOTATION_ANNOTATION_H
        #define JAVA_LANG_ANNOTATION_ANNOTATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Class.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Annotation
            : public virtual Object
         {

    public: virtual Class* annotationType() = 0;

};

            


        #endif //JAVA_LANG_ANNOTATION_ANNOTATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(JAVA_LANG_ANNOTATION_ANNOTATION_H_COMPLETE)
        #define JAVA_LANG_ANNOTATION_ANNOTATION_H_COMPLETE
        
        #endif
    
