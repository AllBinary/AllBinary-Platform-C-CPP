
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/EOFException.h>

      
#include <java/io/IOException.h>

      
#include <javax/microedition/rms/RecordComparator.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScoreComparator
            : public Object
        : public RecordComparator {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: bool isHighestBest;

public: ScoreComparator(bool isHighestBest);

    public: int64_t getBestScore();

    public: int32_t compare(std::vector<int8_t> recordOne, std::vector<int8_t> recordTwo);

    public: int32_t getHighTooLow(int64_t scoreOne, int64_t scoreTwo);

    public: int32_t getLowTooHigh(int64_t scoreOne, int64_t scoreTwo);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_SCORECOMPARATOR_H
