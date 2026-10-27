
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMELOCKABLEFORMPAINTABLEFACTORY_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMELOCKABLEFORMPAINTABLEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/form/ItemPaintable.h>

      
#include <org/allbinary/graphics/form/ItemPaintableFactory.h>

      
#include <org/allbinary/graphics/form/PaintableForm.h>

      
#include <org/allbinary/graphics/form/ScrollCurrentSelectionForm.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/PreGameLockablePaintable.h"

class PreGameLockableFormPaintableFactory: public ItemPaintableFactory {

    private: int32_t lockedIndex;

public: PreGameLockableFormPaintableFactory(int32_t lockedIndex);

                //@Throws(Exception.constructor)
            
    public: ItemPaintable* getInstanceItemPaintable(PaintableForm* paintableForm);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMELOCKABLEFORMPAINTABLEFACTORY_H
