
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_LOG_FRAMELOG_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_LOG_FRAMELOG_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/io/File.h>

      
#include <java/io/FileOutputStream.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/input/automation/ImageOutputData.h>

      
#include <org/allbinary/logic/java/number/LongUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FrameLog
            : public Object
         {
        

    private: static frameBytes: std::vector<int8_t> = .toCharArray().getBytes()!;

    private: static info: std::vector<int8_t> = .toCharArray().getBytes()!;

    private: static actions: std::vector<int8_t> = .toCharArray().getBytes()!;

    private: const frame: Long;

    private: infoStringBuffer: StringMaker = new StringMaker();

    private: actionsStringBuffer: StringMaker = new StringMaker();

public constructor (Long frame);

    public addInfo(string infoString);

    public addActions(Vector<string> vectorOfStrings);

    public addAction(string action);

                //@Throws(Exception.constructor)
            
    public write();

    public Long getFrame();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_LOG_FRAMELOG_H
