
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
        



        #ifndef ORG_ALLBINARY_GUI_SWING_WORKERS_JLISTSWINGWORKER_H
        #define ORG_ALLBINARY_GUI_SWING_WORKERS_JLISTSWINGWORKER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/swing.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/gui/swing/workers/SwingWorker.h"
class JList;
class ListModel;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class JListSwingWorker: public SwingWorker {

    private: JList* jList;

    private: ListModel* listModel;

public: JListSwingWorker(JList* jList, ListModel* listModel);

    public: Object* doInBackground();

    /*protected*/ public: void done();

    private: JList* getJList();

    private: void setJList(JList* jList);

    private: ListModel* getListModel();

    private: void setListModel(ListModel* listModel);

};

            


        #endif //ORG_ALLBINARY_GUI_SWING_WORKERS_JLISTSWINGWORKER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GUI_SWING_WORKERS_JLISTSWINGWORKER_H_COMPLETE)
        #define ORG_ALLBINARY_GUI_SWING_WORKERS_JLISTSWINGWORKER_H_COMPLETE
        #if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include("org/allbinary/gui/swing/workers/SwingWorker.h")
#include "org/allbinary/gui/swing/workers/SwingWorker.h"
#endif
#if __has_include("org/allbinary/gui/swing/workers/JList.h")
#include "org/allbinary/gui/swing/workers/JList.h"
#endif
#if __has_include("org/allbinary/gui/swing/workers/ListModel.h")
#include "org/allbinary/gui/swing/workers/ListModel.h"
#endif

        #endif
    
