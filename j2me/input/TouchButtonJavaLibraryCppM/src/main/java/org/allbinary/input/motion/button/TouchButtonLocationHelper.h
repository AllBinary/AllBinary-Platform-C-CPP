
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CommonButtons.h"

class TouchButtonLocationHelper
            : public Object
         {

    private: int32_t totalColumns;

    private: int32_t totalRows;

    private: int32_t columnsRemainder;

    private: int32_t rowsRemainder;

    private: int32_t columnsRemainderHalf;

    private: int32_t rowsRemainderHalf;

public: TouchButtonLocationHelper();

    public: int32_t getTotalColumns();

    public: int32_t getTotalRows();

    public: int32_t getColumnsRemainder();

    public: int32_t getRowsRemainder();

    public: int32_t getColumnsRemainderHalf();

    public: int32_t getRowsRemainderHalf();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_H
