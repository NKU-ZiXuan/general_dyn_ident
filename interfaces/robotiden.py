import sympy
import numpy
import sympybotics

rbtdef = sympybotics.RobotDef("franka",
            [(0,             0,      0.333,   "q"),
             ("-pi/2",       0,          0,   "q"),
             ("pi/2",        0,      0.316,   "q"),
             ("pi/2",   0.0825,          0,   "q"),
             ("-pi/2", -0.0825,      0.384,   "q"),
             ("pi/2",        0,          0,   "q"),
             ("pi/2",    0.088,      0.107,   "q")],
            dh_convention="modified")   # # (alpha, a, d, theta)

rbtdef.gravityacc=sympy.Matrix([0.0, 0.0, -9.81])

rbtdef.frictionmodel = {'Coulomb', 'viscous'}
# rbtdef.driveinertiamodel = 'simplified'

print(rbtdef.dynparms())

rbt = sympybotics.RobotDynCode(rbtdef, verbose=True)

tau_str = sympybotics.robotcodegen.robot_code_to_func('C', rbt.invdyn_code, 'tau_out', 'tau', rbtdef)
print(tau_str) 

rbt.calc_base_parms()
rbt.dyn.baseparms
print(rbt.dyn.baseparms)
rbt.Hb_code
print(rbt.Hb_code)
M = sympybotics.robotcodegen.robot_code_to_func( 'c', rbt.M_code, 'M', 'get_franka_M', rbt.rbtdef)
c = sympybotics.robotcodegen.robot_code_to_func( 'c', rbt.c_code, 'c', 'get_franka_c', rbt.rbtdef)
g = sympybotics.robotcodegen.robot_code_to_func( 'c', rbt.g_code, 'g', 'get_franka_g', rbt.rbtdef)
# print(Yr)

data=open("result.cpp",'w+')
print(rbt.dyn.dynparms,M,c,g,file=data)
data.close()
 
