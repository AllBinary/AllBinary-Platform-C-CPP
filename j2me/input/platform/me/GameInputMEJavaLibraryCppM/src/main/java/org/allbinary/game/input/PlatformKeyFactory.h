
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "J2MEGameKey.h"
#include "J2MEKeyFactory.h"
#include "Input.h"

class PlatformKeyFactory
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static PlatformKeyFactory getInstance();

    public string getString(int32_t keyCode);

    public bool isSubmission(Input input);

    public bool isDelete(Input input);

    public bool isBackSpace(Input input);

    public bool isLeft(Input input);

    public bool isRight(Input input);

    public bool isUp(Input input);

    public bool isDown(Input input);

    public bool isEnter(Input input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H
