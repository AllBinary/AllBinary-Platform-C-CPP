
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
        



        #ifndef ORG_ALLBINARY_GUI_SWING_WORKERS_JLISTSWINGWORKER_CPP
        #define ORG_ALLBINARY_GUI_SWING_WORKERS_JLISTSWINGWORKER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/gui/swing/workers/JListSwingWorker.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/swing.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/gui/swing/workers/SwingWorker.h"
#include "org/allbinary/gui/swing/workers/JList.h"
#include "org/allbinary/gui/swing/workers/ListModel.h"


JListSwingWorker::JListSwingWorker(JList* jList, ListModel* listModel){
this->setJList(jList);
    
this->setListModel(listModel);
    
}


    auto JListSwingWorker::doInBackground() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto JListSwingWorker::done() -> void{
this->getJList()->setModel(this->getListModel());
    
}


    auto JListSwingWorker::getJList() -> JList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->jList;
    
}


    auto JListSwingWorker::setJList(JList* jList) -> void{
this->jList= jList;
    
}


    auto JListSwingWorker::getListModel() -> ListModel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->listModel;
    
}


    auto JListSwingWorker::setListModel(ListModel* listModel) -> void{
this->listModel= listModel;
    
}




        #endif //ORG_ALLBINARY_GUI_SWING_WORKERS_JLISTSWINGWORKER_CPP
