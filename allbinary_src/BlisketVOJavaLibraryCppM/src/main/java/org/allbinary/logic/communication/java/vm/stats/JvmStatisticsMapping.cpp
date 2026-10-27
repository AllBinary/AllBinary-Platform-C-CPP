
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICSMAPPING_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICSMAPPING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/java/vm/stats/JvmStatisticsMapping.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/java/vm/stats/JvmStatistics.h"
#include "org/allbinary/logic/communication/java/vm/stats/JvmStatisticsData.h"


JvmStatisticsMapping::JvmStatisticsMapping() : JvmStatistics(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto JvmStatisticsMapping::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(JvmStatisticsData::FREE_MEMORY_BYTES, this->getFreeMemoryBytesString());
    
hashMap->put(JvmStatisticsData::FREE_MEMORY_KILOBYTES, this->getFreeMemoryKilobytesString());
    
hashMap->put(JvmStatisticsData::FREE_MEMORY_MEGABYTES, this->getFreeMemoryMegabytesString());
    
hashMap->put(JvmStatisticsData::MAX_MEMORY_BYTES, this->getMaxMemoryBytesString());
    
hashMap->put(JvmStatisticsData::MAX_MEMORY_KILOBYTES, this->getMaxMemoryKilobytesString());
    
hashMap->put(JvmStatisticsData::MAX_MEMORY_MEGABYTES, this->getMaxMemoryMegabytesString());
    
hashMap->put(JvmStatisticsData::NUMBER_OF_THREADS, this->getNumberOfThreadsString());
    
hashMap->put(JvmStatisticsData::TOTAL_MEMORY_BYTES, this->getTotalMemoryBytesString());
    
hashMap->put(JvmStatisticsData::TOTAL_MEMORY_KILOBYTES, this->getTotalMemoryKilobytesString());
    
hashMap->put(JvmStatisticsData::TOTAL_MEMORY_MEGABYTES, this->getTotalMemoryMegabytesString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto JvmStatisticsMapping::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JvmStatisticsData::NAME;
    
}


                //@Throws(Exception.constructor)
            
    auto JvmStatisticsMapping::toVector() -> BasicArrayList*{

    BasicArrayList* vector = new BasicArrayListD();;
    
vector->add(this->getFreeMemoryBytesString());
    
vector->add(this->getFreeMemoryKilobytesString());
    
vector->add(this->getFreeMemoryMegabytesString());
    
vector->add(this->getMaxMemoryBytesString());
    
vector->add(this->getMaxMemoryKilobytesString());
    
vector->add(this->getMaxMemoryMegabytesString());
    
vector->add(this->getNumberOfThreadsString());
    
vector->add(this->getTotalMemoryBytesString());
    
vector->add(this->getTotalMemoryKilobytesString());
    
vector->add(this->getTotalMemoryMegabytesString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICSMAPPING_CPP
