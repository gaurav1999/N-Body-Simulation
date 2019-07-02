#ifndef Simulator_hpp
#define Simulator_hpp

#include <cmath>
#include <vector>
#include "Eigen/Dense"
#include "Math.hpp"
#include "Body.hpp"
#include "Constants.hpp"

using Eigen::Vector3d;

namespace Celestia {
	class Simulator {
	public:
		double T;
		double dt;

		Simulator(): T(10), dt(0.001) {}

		double gravitional_force (const Body& body1, const Body& body2);
		void set_acceleration (Body& body1, Body& body2);
		void move (Body& body1, Body& body2);
	};
}

#endif /* Simulator.hpp */
