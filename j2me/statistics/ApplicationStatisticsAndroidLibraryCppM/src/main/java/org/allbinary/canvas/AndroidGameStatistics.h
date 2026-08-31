
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
        



        #ifndef ORG_ALLBINARY_CANVAS_ANDROIDGAMESTATISTICS_H
        #define ORG_ALLBINARY_CANVAS_ANDROIDGAMESTATISTICS_H

            #include "../../../java/lang/Long.h"
        
#include <android/view/View.h>

      
#include <org/allbinary/android/view/BaseViewWrapper.h>

      
#include <org/allbinary/android/view/ViewWrapper.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseGameStatistics.h"

class AndroidGameStatistics: public BaseGameStatistics {
        

    private: view: BaseViewWrapper = BaseViewWrapper.NULL_VIEW_WRAPPER;

    private: totalOnDraws: int64_t= 0;

    private: const ANDROID_STRING_ARRAY: std::vector<string> = new Array(14);

public constructor ();

    public initView(View view);

    public process();

    public nextOnDraw();

    private: const TOTAL_ONDRAWS: string = " Total onDraws: ";

    private: const ONDRAWS_RATE: string = " onDraws(/10) Sec: ";

    public std::vector<string> toStringArray();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_CANVAS_ANDROIDGAMESTATISTICS_H
