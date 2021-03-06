#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <memory>
#include <string>
#include <map>
#include <list>
#include <iterator>
#include <set>
#include <memory>
#include <cassert>
#include <vector>

namespace dgmpp {
	typedef int TypeID;
	typedef double Float;

	class Item;
	class Attribute;
	class Effect;
	class EffectPrototype;
	class Ship;
	class Module;
	class Gang;
	class Engine;
	class Character;
	class Area;
	class Skill;
	class Implant;
	class Booster;
	class Modifier;
	class LocationGroupModifier;
	class LocationRequiredSkillModifier;
	class Charge;
	class Drone;
	class EffectInterpreter;
	class ControlTower;
	class StarbaseStructure;
	class Environment;
	
	class Planet;
	class Facility;
	class CommandCenter;
	class Route;
	class Commodity;
	
	class Structure;
	class Cargo;
	
	class GangBoost;
	
	typedef std::map<TypeID, std::shared_ptr<Attribute>> AttributesMap;
	typedef std::list<std::shared_ptr<Effect> > EffectsList;
	typedef std::vector<std::shared_ptr<Module>> ModulesList;
	typedef std::list<std::shared_ptr<Drone>> DronesList;
	typedef std::list<std::shared_ptr<Character>> CharactersList;
	typedef std::map<TypeID, std::shared_ptr<Skill>> SkillsMap;
	typedef std::list<std::shared_ptr<Implant>> ImplantsList;
	typedef std::list<std::shared_ptr<Booster>> BoostersList;
	typedef std::list<std::shared_ptr<Modifier>> ModifiersList;
	typedef std::list<std::shared_ptr<StarbaseStructure>> StarbaseStructuresList;
	typedef std::list<std::shared_ptr<Cargo>> CargoList;
	
	typedef TypeID AttributeID;
	typedef TypeID GroupID;
	typedef TypeID SkillID;

	typedef std::map<AttributeID, ModifiersList> ItemModifiers;
	typedef ItemModifiers LocationModifiers;
	typedef std::map<SkillID, ItemModifiers> LocationRequiredSkillModifiers;
	typedef std::map<GroupID, ItemModifiers> LocationGroupModifiers;
	
	typedef std::list<std::shared_ptr<Facility>> FacilitiesList;
	typedef std::list<std::shared_ptr<const Route>> RoutesList;

	struct Tank
	{
		union {
			struct {
				Float passiveShield;
				Float shieldRepair;
				Float armorRepair;
				Float hullRepair;
			};
			Float layers[4];
		};
	};
	
	struct HitPoints
	{
		union {
			struct {
				Float shield;
				Float armor;
				Float hull;
			};
			Float layers[3];
		};
	};

	struct ResistancesLayer
	{
		union {
			struct {
				Float em;
				Float thermal;
				Float kinetic;
				Float explosive;
			};
			Float resistances[4];
		};
	};
	
	struct Resistances
	{
		union {
			struct {
				ResistancesLayer shield, armor, hull;
			};
			ResistancesLayer layers[3];
		};
	};
	
	enum CommodityTier {
		TIER_UNKNOWN = -1,
		TIER_RAW,
		TIER1,
		TIER2,
		TIER3,
		TIER4
	};
}
