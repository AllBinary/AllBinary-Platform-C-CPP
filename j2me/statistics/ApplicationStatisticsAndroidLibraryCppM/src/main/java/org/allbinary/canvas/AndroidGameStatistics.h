
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

            #include <vector>
        
            #include "java/lang/Long.h"
        
#include <android/view/View.h>

      
#include <org/allbinary/android/view/BaseViewWrapper.h>

      
#include <org/allbinary/android/view/ViewWrapper.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseGameStatistics.h"

class AndroidGameStatistics: public BaseGameStatistics {

    private: BaseViewWrapper view = BaseViewWrapper::NULL_VIEW_WRAPPER;

    private: int64_t totalOnDraws= 0;

    private: const std::vector<std::string> ANDROID_STRING_ARRAY = std::vector<std::string>(14);

public: AndroidGameStatistics();

    public: void initView(View view);

    public: void process();

    public: void nextOnDraw();

    private: const std::string TOTAL_ONDRAWS = " Total onDraws: ";

    private: const std::string ONDRAWS_RATE = " onDraws(/10) Sec: ";

    public: std::vector<std::string> toStringArray();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_CANVAS_ANDROIDGAMESTATISTICS_H
