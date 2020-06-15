#ifndef METACLUSTERPLUGIN_H
#define METACLUSTERPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class MetaClusterPlugin : public Plugin
{
public: 
 std::string toString() {return "MetaCluster";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
