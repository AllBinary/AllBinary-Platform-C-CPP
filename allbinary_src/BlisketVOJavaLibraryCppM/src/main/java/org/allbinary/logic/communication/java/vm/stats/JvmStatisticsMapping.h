
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICSMAPPING_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICSMAPPING_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JvmStatistics.h"
#include "JvmStatisticsData.h"

class JvmStatisticsMapping: public JvmStatistics, public TableMappingInterface {

public: JvmStatisticsMapping();

    public: HashMap<Object*, Object*> toHashMap();

                //@Throws(Exception.constructor)
            
    public: Object* getKey();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList toVector();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICSMAPPING_H
