
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_SCORECOMPARATOR_H
        #define ORG_ALLBINARY_GAME_SCORE_SCORECOMPARATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/io/ByteArrayInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <javax/microedition/rms/RecordComparator.h>
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScoreComparator
            : public virtual Object
        , public RecordComparator {

    /*protected*/ public: LogUtil* logUtil;

    private: bool isHighestBest;

public: ScoreComparator(bool isHighestBest);

    public: int64_t getBestScore();

    public: int32_t compare(std::vector<int8_t> recordOne, std::vector<int8_t> recordTwo);

    public: int32_t getHighTooLow(int64_t scoreOne, int64_t scoreTwo);

    public: int32_t getLowTooHigh(int64_t scoreOne, int64_t scoreTwo);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_SCORECOMPARATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_SCORECOMPARATOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_SCORECOMPARATOR_H_COMPLETE
        #if __has_include(<java/io/ByteArrayInputStream.h>)
#include <java/io/ByteArrayInputStream.h>
#endif
#if __has_include(<java/io/DataInputStream.h>)
#include <java/io/DataInputStream.h>
#endif
#if __has_include(<java/io/EOFException.h>)
#include <java/io/EOFException.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<javax/microedition/rms/RecordComparator.h>)
#include <javax/microedition/rms/RecordComparator.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
