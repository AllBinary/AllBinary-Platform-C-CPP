
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEFORMPAINTABLEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEFORMPAINTABLEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ItemPaintableFactory.h"
class LockablePaintable;
class ItemPaintable;
class PaintableForm;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LockableFormPaintableFactory: public ItemPaintableFactory {

    private: int32_t lockedIndex;

public: LockableFormPaintableFactory(int32_t lockedIndex);

                //@Throws(Exception.constructor)
            
    public: ItemPaintable* getInstanceItemPaintable(PaintableForm* paintableForm);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEFORMPAINTABLEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEFORMPAINTABLEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEFORMPAINTABLEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/graphics/form/ItemPaintableFactory.h")
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#endif
#if __has_include("org/allbinary/graphics/form/LockablePaintable.h")
#include "org/allbinary/graphics/form/LockablePaintable.h"
#endif
#if __has_include("org/allbinary/graphics/form/ItemPaintable.h")
#include "org/allbinary/graphics/form/ItemPaintable.h"
#endif
#if __has_include("org/allbinary/graphics/form/PaintableForm.h")
#include "org/allbinary/graphics/form/PaintableForm.h"
#endif

        #endif
    
