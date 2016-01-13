#pragma once
#include "Facility.h"
#include "Route.h"

namespace dgmpp {
	class CommandCenter: public Facility {
	public:
		enum {
			GROUP_ID = 1027
		};
		CommandCenter(TypeID typeID, const std::string& typeName, double capacity, std::shared_ptr<Planet> const& owner = std::shared_ptr<Planet>(nullptr), int64_t identifier = 0);
		virtual TypeID getGroupID() {return GROUP_ID;};
	};
}