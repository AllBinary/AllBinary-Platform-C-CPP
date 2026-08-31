
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
        



        #ifndef ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_H
        #define ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Integer.h"
        
            #include "../../../java/lang/Long.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/ScaleFactorFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BaseGameStatistics
            : public Object
         {
        

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(Integer.MAX_VALUE);

    private: const updateDelayHelper: TimeDelayHelper = new TimeDelayHelper(2000);

    private: totalRefreshes: int64_t= 0;

    private: totalFrames: int64_t= 0;

    const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

public constructor ();

    public init();

    public add(string string);

    public process();

    public nextFrame();

    public nextRefresh();

    private: const DEFAULT_SCALE_FACTOR: int32_t = ScaleFactorFactory.getInstance()!.DEFAULT_SCALE_FACTOR;

    public int16_t getRefreshRate();

    TimeDelayHelper getTimeDelayHelper();

    const NOT: string = "Not enough Time to Calculate";

    private: const EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: const STRING_ARRAY: std::vector<string> = 
                                                        [
                                                            " Total Time: ",this.EMPTY_STRING," Total Frames: ",this.EMPTY_STRING," Frames/10 Sec: ",this.EMPTY_STRING," Total Paints: ",this.EMPTY_STRING," Paints/10 Sec: ",this.EMPTY_STRING
                                                        ];

    private: const SPACE_CHAR: char = ' ';

    private: const PLUS_CHAR: char = '+';

    private: const X_CHAR: char = 'X';

    private: const CHAR_ARRAY: std::vector<std::vector<char>> = 
                                                        [
                                                            ['F','r','a','m','e','s','/','1','0',' ','S','e','c',':'],['X','X'],['P','a','i','n','t','s','/','1','0',' ','S','e','c',':'],['X','X']
                                                        ];

    private: const primitiveLongSingleton: PrimitiveLongSingleton = PrimitiveLongSingleton.getInstance()!;

    public std::vector<std::vector<char>> to2DCharArray();

    public std::vector<string> toStringArray();

    public string toStringAt(int64_t totalTime);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_H
