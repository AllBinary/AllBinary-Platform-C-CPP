
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_BUILDMENUCOMPOSITEINTERFACE_H
        #define ORG_ALLBINARY_GAME_INPUT_BUILDMENUCOMPOSITEINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BuildMenuCompositeInterface {

    public: virtual ScrollSelectionForm* getCurrentScrollSelectionForm() = 0;

    public: virtual void setCurrentScrollSelectionForm(ScrollSelectionForm* currentScrollSelectionForm) = 0;

    public: virtual ScrollSelectionForm* getBuildingScrollSelectionForm() = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_BUILDMENUCOMPOSITEINTERFACE_H
