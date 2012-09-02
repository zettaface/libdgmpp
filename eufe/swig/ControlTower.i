
namespace eufe {
	
	%nodefaultctor ControlTower;
	
	class ControlTower : public eufe::Item
	{
	public:
		eufe::Structure* addStructure(eufe::TypeID typeID);
		void removeStructure(eufe::Structure* structure);
		
		const eufe::StructuresList& getStructures();
		bool canFit(eufe::Structure* structure);
		
		const eufe::DamagePattern& getDamagePattern();
		void setDamagePattern(const eufe::DamagePattern& damagePattern);
		
		//Calculations
		
		float getPowerGridUsed();
		float getTotalPowerGrid();
		float getCpuUsed();
		float getTotalCpu();
		
		//Tank
		const eufe::Resistances& getResistances();
		const eufe::Tank& getTank();
		const eufe::Tank& getEffectiveTank();
		
		const eufe::HitPoints& getHitPoints();
		const eufe::HitPoints& getEffectiveHitPoints();
		
		float getShieldRecharge();
		
		//DPS
		float getWeaponDps();
		float getWeaponVolley();
	};
}