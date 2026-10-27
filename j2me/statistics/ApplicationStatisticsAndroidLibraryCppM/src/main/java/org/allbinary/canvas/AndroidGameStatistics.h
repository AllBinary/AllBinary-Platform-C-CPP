
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Long.h"
        
class View;
class BaseViewWrapper;
class ViewWrapper;
class StringMaker;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/BaseGameStatistics.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidGameStatistics: public BaseGameStatistics {

    private: BaseViewWrapper* view;

    private: int64_t totalOnDraws= 0;

    private: std::vector<std::string> ANDROID_STRING_ARRAY;

public: AndroidGameStatistics();

    public: void initView(View* view);

    public: void process();

    public: void nextOnDraw();

    private: const std::string TOTAL_ONDRAWS = " Total onDraws: ";

    private: const std::string ONDRAWS_RATE = " onDraws(/10) Sec: ";

    public: std::vector<std::string> toStringArray();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_CANVAS_ANDROIDGAMESTATISTICS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CANVAS_ANDROIDGAMESTATISTICS_H_COMPLETE)
        #define ORG_ALLBINARY_CANVAS_ANDROIDGAMESTATISTICS_H_COMPLETE
        #if __has_include(<android/view/View.h>)
#include <android/view/View.h>
#endif
#if __has_include(<org/allbinary/android/view/BaseViewWrapper.h>)
#include <org/allbinary/android/view/BaseViewWrapper.h>
#endif
#if __has_include(<org/allbinary/android/view/ViewWrapper.h>)
#include <org/allbinary/android/view/ViewWrapper.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/canvas/BaseGameStatistics.h")
#include "org/allbinary/canvas/BaseGameStatistics.h"
#endif

        #endif
    
