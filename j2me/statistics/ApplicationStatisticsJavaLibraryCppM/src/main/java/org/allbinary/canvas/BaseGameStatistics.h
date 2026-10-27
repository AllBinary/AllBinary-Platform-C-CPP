
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/ScaleFactorFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BaseGameStatistics
            : public Object
         {

    private: TimeDelayHelper* timeDelayHelper = new TimeDelayHelper(Integer.MAX_VALUE);

    private: TimeDelayHelper* updateDelayHelper = new TimeDelayHelper(2000);

    private: int64_t totalRefreshes= 0;

    private: int64_t totalFrames= 0;

    protected: GameTickTimeDelayHelper* gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

public: BaseGameStatistics();

    public: void init();

    public: void add(std::string string);

    public: void process();

    public: void nextFrame();

    public: void nextRefresh();

    private: const int32_t DEFAULT_SCALE_FACTOR = ScaleFactorFactory::getInstance()->DEFAULT_SCALE_FACTOR;

    public: int16_t getRefreshRate();

    protected: TimeDelayHelper* getTimeDelayHelper();

    protected: const std::string NOT = "Not enough Time to Calculate";

    private: const std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;

    private: const std::vector<std::string> STRING_ARRAY = 
                                                        {
                                                            " Total Time: ",this->EMPTY_STRING," Total Frames: ",this->EMPTY_STRING," Frames/10 Sec: ",this->EMPTY_STRING," Total Paints: ",this->EMPTY_STRING," Paints/10 Sec: ",this->EMPTY_STRING
                                                        };

    private: const char SPACE_CHAR = ' ';

    private: const char PLUS_CHAR = '+';

    private: const char X_CHAR = 'X';

    private: const std::vector<std::vector<char>> CHAR_ARRAY = 
                                                        {
                                                            ['F','r','a','m','e','s','/','1','0',' ','S','e','c',':'],['X','X'],['P','a','i','n','t','s','/','1','0',' ','S','e','c',':'],['X','X']
                                                        };

    private: PrimitiveLongSingleton* primitiveLongSingleton = PrimitiveLongSingleton::getInstance();

    public: std::vector<std::vector<char>> to2DCharArray();

    public: std::vector<std::string> toStringArray();

    public: std::string toStringAt(int64_t totalTime);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_H
